#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,x,y;
cin>>t;
while(t--)
{
cin>>a>>b;
x=1;y=2;
while(a>=0 && b>=0)
{
a-=x;x+=2;b-=y;y+=2;
//cout<<a<<" "<<x<<" "<<b<<" "<<y<<endl;
}
if(a<0)
cout<<"Bob"<<endl;
else
cout<<"Limak"<<endl;
}
return 0;
}

