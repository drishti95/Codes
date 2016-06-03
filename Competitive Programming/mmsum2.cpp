#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxsubarray(vector<ll> A,ll n)
{
	ll current_sum=A[0];
	ll max_so_far=A[0];
	for(ll i=1;i<n;i++)
		{
			current_sum=max(current_sum+A[i],A[i]);
			max_so_far=max(current_sum,max_so_far);
		}
	return max_so_far;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
		{
			ll n;
			ll item;
			cin >> n;
			vector<ll> A;
			for(int i=0;i<n;i++)
				{
					cin >> item;
					A.push_back(item);
				}
			ll original_sum=maxsubarray(A,n);
			ll result=original_sum;
			for(ll i=0;i<n;i++)
				{
					vector<ll> temp;
					temp=A;
					temp.erase(temp.begin()+i);
					int compare_sum=maxsubarray(temp,n-1);
					if(compare_sum>original_sum)
					    result=compare_sum;
				}
			cout<< result <<endl;
		}
}
