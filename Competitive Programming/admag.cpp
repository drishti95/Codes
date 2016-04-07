#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,c,a,b,sum;
cin>>t;
while(t--)
{
cin>>n;
c=0;a=1;b=1;c=1;sum=1;
while(c<n)
{
c=a+b;
if(c>n)
break;
a=b;b=c;
sum++;
}
cout<<sum<<endl;
}
return 0;
}
