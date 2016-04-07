#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
long long int ar[100001],t,n,i,m,k,o,p;
cin>>t;
while(t--)
{
cin>>n>>m>>o;
p=1;
for(i=0;i<n;i++)
cin>>ar[i];
if(ar[0]<o)
{
  cout<<-1<<endl;
  continue;
}
else
{
for(i=1;i<n;i++)
{
   if(ar[i]>o)
   p++;
}
}
if(p>n)
p=n;
cout<<p<<endl;
}
return 0;
}
