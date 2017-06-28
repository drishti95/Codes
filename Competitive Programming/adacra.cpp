#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,l,i,p,x,y;
string s;
cin>>t;
while(t--)
{
cin>>s;x=0;y=0;
if(s[0]=='U')
{
p=0;x++;}
else
{
p=1;y++;}
for(i=0;i<s.size();i++)
{
if(s[i]=='U' && p==0)
{
 continue;
}
if(s[i]=='D' && p==1)
{
 continue;
}
if(s[i]=='U' && p==1)
{
p=0; x++;
}
else if(s[i]=='D' && p==0)
{
p=1; y++;
}
}
if(x<y)
cout<<x<<endl;
else
cout<<y<<endl;
}
}
