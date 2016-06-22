#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,k,x,n,p,sum,d,r,i;
cin>>t;
while(t--)
{
cin>>k;
sum=0;
x=(long long int)((log(k-1))/log(5));
p=pow(5,x);
d=0;
r=1;
for(i=x;i>=0;i--)
{
    r+=pow(10,i);
}
while(p>0)
{
    n=(k-1)/p;
    sum+=((n-d)*r);
    p=p/5;
    d=n;
    r=r-pow(10,x);
    x--;

}
cout<<sum<<endl;
}
return 0;
}
