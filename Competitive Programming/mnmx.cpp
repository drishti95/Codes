#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long int t,a,b,x,i;
cin>>t;
b=100001;
while(t--)
{
cin>>a;
for(i=0;i<a;i++)
{
cin>>b;
if(b<x)
x=b;
}

cout<<(a-1)*x<<endl;
}


return 0;
}


