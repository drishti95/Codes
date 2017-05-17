#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,i,n,c,sum,flag;
int *ar;
cin>>t;
while(t--)
{
cin>>n;
ar=new int[n];
sum=0;c=0;flag=0;
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
sum+=ar[i];
if(ar[i]<=2)
{
flag=1;
}
else if(ar[i]==5)
c++;

}
double avg=sum/n;

if(flag)
cout<<"No"<<endl;
else if(c>0 && avg>=4.0 )
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
