#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
long long int t,n,*d,i,f,j,flag;
cin>>t;
while(t--)
{
cin>>n;f=0;
d=new long long int[n];

for(i=0;i<n;i++)
cin>>d[i];

for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<i;j++)
{
if(d[j]==d[i])
{
flag=1;
break;
}
}
if(flag!=1)
f++;
}
cout<<f<<endl;
}
return 0;
}
