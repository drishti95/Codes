#include<bits/stdc++.h>
using namespace std;
long long int gcd (long long int a, long long int b ) {
if ( b == 0 )
return a;
else return gcd ( b , a - b * ( a / b ) );
}
int main()
{
long long int t,a,b,c,x,d,p,n,u;
cin>>t;
while(t--)
{
cin>>a>>b>>c>>d;
p=gcd(c,d);
u=abs(a-b);
n=u%p;
x=(p-n)<n?(p-n):n;
cout<<x<<endl;
}
return 0;
}
