
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,f;
cin>>t;

while(t--)
{
cin>>n;
long long int ar[n],a[501];
for(i=0;i<501;i++)
a[i]=0;
for(i=0;i<n;i++)
{
cin>>ar[i];
a[ar[i]]=i+1;
}
f=0;
for(i=1;i<=n;i++)
{
    if(a[i]!=i)
    f=1;
    if(a[i]==0)
    {
    f=0;break;}

}
if(f==1)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}
return 0;
}

