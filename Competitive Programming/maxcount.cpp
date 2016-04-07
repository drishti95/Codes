#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,ar[100005],a,i,m;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<100005;i++)
ar[i]=0;
for(i=0;i<n;i++)
{
cin>>a;
ar[a]++;
}
m=0;
for(i=0;i<100005;i++)
{
if(ar[i]>m)
{
m=ar[i];
a=i;
}
}
cout<<a<<" "<<m<<endl;
}
return 0;
}
