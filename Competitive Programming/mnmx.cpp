#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,a,b,x,i,y;
cin>>t;
while(t--)
{
cin>>a;
x=100000;

for(i=0;i<a;i++)
{
cin>>b;
if(b<x)
x=b;
}
cout<<x*(a-1)<<endl;
}


return 0;
}


