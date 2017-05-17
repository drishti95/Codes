#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,t,m,i,j;
cin>>t;
while(t--)
{
cin>>n>>k;
char ar[n][6];
int ai[n];
for(i=0;i<n;i++)
{
cin>>ar[i];
ai[i]=0;
}
while(k--)
{
cin>>m;
char p[m][6];
for(i=0;i<m;i++)
			cin>>p[i];
			for(i=0;i<n;i++)
			{
				if(ai[i]==1)
				continue;
				for(j=0;j<m;j++)
				if(strcmp(ar[i],p[j])==0)
				{
					ai[i]=1;
					break;
				}
			}
}
for(i=0;i<n;i++)
		if(ai[i])
		cout<<"YES ";
		else
		cout<<"NO ";
		cout<<endl;
}
return 0;
}
