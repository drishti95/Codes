#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t,n,i;
string x,y,z;
cin>>t;
while(t--)
{
cin>>x>>y;
n=x.length();
z="";
for(i=0;i<n;i++)
{
if(x[i]=='B' && y[i]=='B')
z.append("W");
else
z.append("B");
}
cout<<z<<endl;
}
return 0;
}
