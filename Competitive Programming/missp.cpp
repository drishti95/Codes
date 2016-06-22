#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,k,ar[100002];
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<100002;i++)
ar[i]=0;
for(i=0;i<n;i++)
{
cin>>k;
ar[k]++;
}
for(i=0;i<100002;i++)
{
if(ar[i]%2!=0)
{
cout<<i<<endl;
break;
}
}
}
return 0;
}
