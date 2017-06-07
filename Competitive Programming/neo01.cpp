#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,ar[100000],a,i,n,p;
	cin>>t;
	while(t--)
	{
        cin>>n;
		p=0;a=0;
		for(i=0;i<n;i++)
		{
		  cin>>ar[i];
        }
        sort(ar,ar+n,greater<long long int>());
        p=ar[0];a=p;
        for(i=1;i<n;i++)
        {
          if(p+ar[i]>((p/i+ar[i])*(i+1)))
          a=p+ar[i];
          else
          a=(p/i+ar[i])*(i+1);
          //cout<<a<<" ";
          p=a;
        }

        cout<<a<<endl;
	}
	return 0;
}

