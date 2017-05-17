#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,x,k,j;
cin>>t;
j=t;
while(t--)
{
cin>>n;
long long int ar[n],a[n],b[n];
for(i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<"Case "<<j-t<<":"<<endl;
for(i=0;i<n;i++)
{
a[i]=ar[i]%65536;
b[i]=ar[i]/65536;
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{
cout<<b[i]<<" ";
}
}
return 0;
}

