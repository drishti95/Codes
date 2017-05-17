#include<bits/stdc++.h>
using namespace std;
long long int gcd(int a,int b)
{
    if(b>a)
    return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}
int main()
{
long long int t,n,*ar,i,r;
cin>>t;
while(t--)
{
cin>>n;
ar=new long long int[n];
for(i=0;i<n;i++)
cin>>ar[i];
r=ar[0];
for(i=1;i<n;i++)
r=gcd(r,ar[i]);
cout<<r<<endl;

}
return 0;
}
