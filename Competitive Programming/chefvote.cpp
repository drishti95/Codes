#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,t,k,l,ma,n,*c,flag=0,sum,*a,j,x;
cin>>t;
while(t--)
{
cin>>n;
sum=0;
ma=-1;
c=new int[n];
a=new int[n];
flag=0;
for(i=0;i<n;i++)
{
cin>>c[i];
sum+=c[i];
if(c[i]>=n)
flag=1;
}
for(i=0;i<n;i++)
a[i]=0;
if(sum!=n)
 flag=1;
 if(flag==1)
 cout<<"-1"<<endl;
 else
 {
 while(ma!=0)
 {
 ma=-1;
 for(l=0;l<n;l++)
 {
 if(c[l]>=ma)
 {
 ma=c[l];
 i=l;
 }
 }
 c[i]=0;
 x=ma;
 for(j=0;x>0 && j<n;j++)
 {
 if(a[j]==0 && j!=i)
 {
 a[j]=(i+1);
 x--;
 }
 }
 }
 for(i=0;i<n;i++)
   {
   if(a[i]==0)
   {
   for(j=0;j<n;j++)
   {
   if(a[j]!=0 && a[j]!=i+1)
   {
   a[i]=a[j];
   a[j]=i+1;
   break;
   }
   }
   }
   }
 for(i=0;i<n;i++)
 cout<<a[i]<<" ";
 cout<<endl;
 }
 }
 return 0;
 }
