#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,a[100000],i,p[100000],s,k;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
if(a[n-1]<0)
s=1;
else
s=0;
p[n-1]=1;
k=1;
for(i=n-2;i>=0;i--)
{
if(s==1)
{
if(a[i]>0)
{k++;s=0;}
else
{
k=1;}
p[i]=k;
}
else
{
if(a[i]<0)
{k++;s=1;}
else
{
k=1;
}
p[i]=k;
}

}
for(i=0;i<n;i++)
{
cout<<p[i]<<" ";
}
cout<<endl;
}
return 0;
}
