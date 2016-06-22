#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{

    if(b==0) return a;
    return gcd(b,a%b);

}
int main()
{
long long int t,n,c,b,x,a,d,f;
cin>>t;
while(t--)
{
cin>>n>>c;
a=n;
b=(n*(n-1))/2;
x=(a*b)-(a+b);
f=0;
d=gcd(a,b);
if(c>x && c>=(a+b) && (c%d)==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}

