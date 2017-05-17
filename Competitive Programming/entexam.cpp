#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,e,m;
		cin>>n>>k>>e>>m;
		long long int a,b=0,i,j,req,sum[n-1];
		for(i=0;i<n-1;i++)
		{
		sum[i]=0;
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<e;j++)
			{
				cin>>a;
				sum[i]+=a;
			}
		}
		for(i=0;i<e-1;i++)
		{
			cin>>a;
			b+=a;
		}
		sort(sum,sum+n-1);
        req=(sum[n-k-1]-b+1);
		if(req<0)
		cout<<0<<endl;
		else if(req<=m)
		cout<<(sum[n-k-1]-b+1)<<endl;
		else
		cout<<"Impossible"<<endl;

	}
}
