#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,a[100000],b[100000],c[100000],p,q,r,i,j,k,sum;
	cin>>t;
	while(t--)
	{

		cin>>p>>q>>r;
		for(i=0;i<p;i++)
		cin>>a[i];
		for(j=0;j<q;j++)
		cin>>b[j];
		for(k=0;k<r;k++)
		cin>>c[k];
		sum=0;
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				if(a[i]>b[j])
				continue;
				for(k=0;k<r;k++)
				{
					if(b[j]<c[k])
					continue;
					sum=(sum + ((a[i]+b[j])%1000000007*(b[j]+c[k])%1000000007)%1000000007)%1000000007;
					sum=sum%1000000007;
				}
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}
