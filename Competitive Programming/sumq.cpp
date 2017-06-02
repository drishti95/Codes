#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,a[100000],b[100000],c[100000],p,q,r,i,j,k,sum,a1,a3;
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
        for(j=0;j<q;j++)
        {
            a1=0;
            for(i=0;i<p;i++)
            {
            if(a[i]<=b[j])
            a1=(a1+(a[i]+b[j])%1000000007)%1000000007;
            }
            a3=0;
            for(k=0;k<r;k++)
            {
                if(b[j]>=c[k])
                a3=(a3+(c[k]+b[j])%1000000007)%1000000007;
            }
            sum=(sum + (a1*a3)%1000000007)%1000000007;

        }
		cout<<sum<<endl;
	}

	return 0;
}
