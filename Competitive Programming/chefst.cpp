#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n1,n2,m,s,n,x;
cin>>t;
while(t--)
{
cin>>n1>>n2>>m;
s=n2-n1;
if(n1>n2)
s=n1-n2;
n=n1>n2?n2:n1;
x=(m*(m+1)/2);
if(n>x)
s+=2*(n-x);
cout<<s<<endl;
}
}
