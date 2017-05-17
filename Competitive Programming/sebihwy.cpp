#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,ti;
float d,rs,sg,fg,s,a,b,c;
cin>>t;
while(t--)
{
cin>>s>>sg>>fg>>d>>ti;
d*=50;
rs=d/ti*3.600;
rs+=s;
a=sg-rs;
if(a<0)
a*=-1;
b=fg-rs;
if(b<0)
b*=-1;
c=a-b;
if(c>0)
cout<<"FATHER"<<endl;
else if(c==0)
cout<<"DRAW"<<endl;
else
cout<<"SEBI"<<endl;
}
return 0;
}
