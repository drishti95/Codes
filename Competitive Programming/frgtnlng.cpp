#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,t,l,i,j;
char w[6];
cin>>t;
while(t--)
{
cin>>n>>k;
char ar[7*n];
char p[n*7];
for(i=0;i<n;i++)
{
cin>>ar;
}
while(k--)
{
cin>>l;
for(i=0;i<l;i++)
{
cin>>w;
for(j=0;j<n;j++)
{
if(strcmp(w,ar[j])==0)
{
  p[j]="YES";
}
}
}
}
for(j=0;j<n;j++)
{
if(strcmp(p[j],"YES")!=0)
p[j]="NO";
}
for(i=0;i<n;i++)
{
cout<<p[j];
}
}
return 0;
}
