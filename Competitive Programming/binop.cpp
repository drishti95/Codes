#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,p,l,i;
string a;
string b;
cin>>t;
while(t--)
{
cin>>a;
cin>>b;
l=a.length();
int x[2]={0,0};
int y[2]={0,0};
for(i=0;i<l;i++)
{
y[a[i]-48]++;
if(a[i]!=b[i])
{
  x[b[i]-48]++;
}
}
p=x[0]>x[1]?x[0]:x[1];
if((y[0]==0 && x[0]>0) || (x[1]>0 && y[1]==0))
cout<<"Unlucky Chef"<<endl;
else
{
cout<<"Lucky Chef"<<endl;
cout<<p<<endl;
}
}
return 0;
}
