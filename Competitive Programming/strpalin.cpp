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
    f[(int)(b[i]-'a')]++;

}

for(i=0;i<26;i++)
{
if(f[i]!=0 && p[i]!=0)
break;
else
continue;
}
if(i==26)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}

return 0;
}

