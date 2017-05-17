#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t,n,i,f;
cin>>t;
string s;
while(t--)
{
cin>>n;
cin>>s;

f=0;
for(i=0;i<n;i++)
{
if(i==0)
{
if(s[i]=='0' && s[i+1]=='0')
f++;
}
else if(i==n-1)
{
if(s[i]=='0' && s[i-1]=='0')
f++;
}
else if(s[i]=='0' && s[i+1]=='0' && s[i-1]=='0')
f++;
}
cout<<f<<endl;
}
return 0;

}
