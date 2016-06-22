#include<bits/stdc++.h>
using namespace std;
unsigned long long int ar[100001];
unsigned long long int elem(unsigned long long int x,unsigned long long int m)
{
if(m==0)
return ar[x];
if(x%2==0)
return elem(x/2,m-1);
else
return (elem((x-1)/2,m-1)+elem(((x-1)/2)+1,m-1))%1000000007;
}
int main()
{
unsigned long long int T,n,m,x,y,i,sum,a;
cin>>T;
while(T--)
{
cin>>n>>m>>x>>y;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
sum=0;
for(i=x-1;i<y;i++)
{
a=elem(i,m);
sum+=a;
sum%=(1000000007);
}
cout<<sum<<endl;
}
return 0;
}
