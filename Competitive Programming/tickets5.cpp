#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,f;
string s;
cin>>t;
while(t--)
{
cin>>s;
n=s.length();
if(s[0]==s[1])
cout<<"NO"<<endl;
else
{
f=0;
for(i=1;i<n-2;i++)
{
if(s[i]!=s[i+2])
{
f=1;break;
}
}
if(f==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}

return 0;
}
