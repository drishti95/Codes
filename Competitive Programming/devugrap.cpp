#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
long long int t,n,k,*ar,i,sum;
cin>>t;
while(t--)
{
cin>>n>>k;
ar=new long long int[n];
sum=0;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
for(i=0;i<n;i++)
{
if(ar[i]/k!=0)
{
sum+=ar[i]%k<=(((ar[i]/k)+1)*k-ar[i])?ar[i]%k:(((ar[i]/k)+1)*k-ar[i]);
}
else
sum+=k-ar[i];
}
cout<<sum<<endl;
}


return 0;
}
