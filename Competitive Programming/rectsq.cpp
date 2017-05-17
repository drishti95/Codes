#include<iostream>
using namespace std;
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main()
{
int t;
cin>>t;
while(t--)
{
int m,n;
cin>>m>>n;
int g=gcd(m,n);
int l=(m*n)/g;
cout<<(l/g)<<endl;
}
return 0;
}
