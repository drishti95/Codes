#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,f[26],p[26];
string a,b,x;
cin>>t;
while(t--)
{
cin>>a>>b;
for(i=0;i<26;i++)
{
f[i]=0;p[i]=0;
}
for(i=0;i<a.length();i++)
{
    p[(int)(a[i]-'a')]++;

}
for(i=0;i<b.length();i++)
{
    p[(int)(b[i]-'a')]++;

}
cin>>n;
while(n--)
{
cin>>x;
for(i=0;i<x.length();i++)
{
    f[(int)(x[i]-'a')]++;

}

}
for(i=0;i<26;i++)
{
if(f[i]<=p[i])
continue;
else
break;
}
if(i==26)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

return 0;
}
