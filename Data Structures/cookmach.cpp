#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,a,b,c;
cin>>t;
while(t--)
{
cin>>a>>b;
c=0;
while(a&(a-1))
{
if(a%2)
a=(a-1)/2;
else
a=a/2;
c++;
}
while(a!=b)
{
if(a<b)
a=a*2;
else
a=a/2;
c++;
}
cout<<c<<endl;
}
return 0;
}

