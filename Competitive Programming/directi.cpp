#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define forloop(i,n) for(i=0;i<n;i++)

bool possible(ll v[], ll chk, ll n, ll m)
{
	ll i=0, pos = 1, curr = 0;
	while(i<n && pos<=m )
	{
		if(curr + v[i]> chk)
		{
			pos++;
			curr = v[i];
		}
		else
		{
			curr+=v[i];
		}
		i++;
	}
	if(pos>m)
		return false;
	else return true;
}

int getAns(ll v[], ll sum, ll n, ll m)
{
	ll l=0, r=sum, ans  = -1;

	while(l<=r)
	{
		ll mid  = (l+r)/2;
		if(possible(v,mid,n,m))
		{
			r=mid -1;
			ans = mid;
		}
		else l = mid+1;
	}
	return ans;
}

int main()
{
	ll tc,i,n,m;
	cin>>tc;
	while(tc--)
	{
		cin>>n>>m;
		ll v[n];
		ll sum = 0;

		forloop(i,n)
		{
			cin>>v[i];
			sum+=v[i];
		}
		if(m>n)
			cout<<"-1"<<endl;
		else cout<<getAns(v,sum,n,m)<<endl;
	}
}
