#include<bits/stdc++.h>
using namespace std;
long int gcd(long int a,long int b)
{
    if(a%b==0)
    return b;
    else
    return gcd(b,(a%b));
}
int main()
{
long int t,a,b,c,x,i;
cin>>t;
while(t--)
{
cin>>a>>b;
if(b>a)
{
c=b;
b=a;
a=c;
}
x=gcd(a,b);
cout<<x<<" "<<(a*b)/x<<endl;
}
return 0;
}
