#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,lm,lw,f,p,a,i,j;
char m[25010],w[25010];
cin>>t;
while(t--)
{
cin>>m>>w;
f=0;
lm=strlen(m);
lw=strlen(w);
if(lm<lw)
f=1;
if(f)
{
p=0;
for(i=0;i<lm;i++)
{
a=0;
for(j=p;j<lw;j++)
{
  if(w[j]==m[i])
  {
  p=j+1;
  a=1;
  break;
  }
}
if(a==0)
{
cout<<"NO"<<endl;
break;
}
}
if(a==1)
{
cout<<"YES"<<endl;
}
}
else
{
p=0;
for(i=0;i<lw;i++)
{
a=0;
for(j=p;j<lm;j++)
{
  if(m[j]==w[i])
  {
  p=j+1;
  a=1;
  break;
  }
}
if(a==0)
{
cout<<"NO"<<endl;
break;
}
}
if(a==1)
{
cout<<"YES"<<endl;
}
}
}
return 0;
}
