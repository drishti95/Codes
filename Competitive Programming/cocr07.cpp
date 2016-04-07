#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,k,i,a,x=0,*arr,f,j;
cin>>n>>k;
arr=new long long int[n];
for(i=0;i<n;i++)
{
cin>>a;
if(a%2 && a<k)
{
f=1;
for(j=0;j<x;j++)
{
if(a==arr[j])
{
f=0;
break;
}
}
if(f)
arr[x++]=a;
}
}
cout<<x<<endl;
return 0;
}
