#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,c,a,l;
int ar[n];
cin>>n;
for(i=0;i<n;i++)
cin>>ar[i];
a=0;l=0;
for(i=1;i<=n;i++)
{
if(ar[i-1]==0)
l=i;
c=i-l;
a=a>c?a:c;
}
cout<<a<<endl;
return 0;
}
