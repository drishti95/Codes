#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,m,b,p,a;
cin>>t;
while(t--)
{
cin>>n>>b>>m;
p=0;
while(n)
{
a=n/2;
p+=(n-a)*m;
p+=b;
m=2*m;
n=a;
}
cout<<p-b<<endl;
}
return 0;
}
