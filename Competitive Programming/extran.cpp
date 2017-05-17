#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i;
cin>>t;
while(t--)
{
cin>>n;
long long int x[n];
for(i=0;i<n;i++)
{
cin>>x[i];
}
sort(x,x+n);
for(i=1;i<n-1;i++)
{
if(x[i]-x[i-1]!=1)
{
cout<<x[i-1]<<endl;
break;
}
}
if(i==n-1)
cout<<x[n-1]<<endl;
}
return 0;
}

