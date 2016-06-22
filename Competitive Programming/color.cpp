#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,ar[3],x;
cin>>t;
string s;
while(t--)
{
cin>>n;
cin>>s;
ar[0]=0;
ar[1]=0;
ar[2]=0;
for(i=0;i<s.length();i++)
{
if(s[i]=='R')
ar[0]++;
else if(s[i]=='B')
ar[1]++;
else
ar[2]++;
}
x=ar[0];
if(ar[1]>x)
x=ar[1];
if(ar[2]>x)
x=ar[2];
cout<<n-x<<endl;
}

return 0;
}
