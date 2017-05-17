#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,f;
cin>>t;
while(t--)
{
cin>>n;
f=n;
for(i=1;i<=sqrt(n);i++)
{
if(n%i==0)
{
if(abs(i-n/i)<f)
{
f=abs(i-n/i);
}
}
}
cout<<f<<endl;
}
return 0;

}
