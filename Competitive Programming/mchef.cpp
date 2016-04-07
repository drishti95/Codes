#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,k,m,*rat,i,sum,l,r,c,ne,mi;
cin>>t;
while(t--)
{
cin>>n>>k>>m;
rat=new long long int[n+1];
sum=0;
for(i=0;i<n;i++)
{
cin>>rat[i];
sum+=rat[i];
}
ne=sum;mi=sum;
while(m--)
{
cin>>l>>r>>c;
if(c<=k)
{
for(i=l-1;i<r;i++)
{
if(rat[i]<mi)
mi=rat[i];
}
if((sum-mi)>ne)
ne=sum-mi;
}
}
cout<<ne<<endl;


}
return 0;
}
