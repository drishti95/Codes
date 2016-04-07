#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,c,l,sw,flag,i,first,pos;
char l1[1000005],l2[1000005];
cin>>t;
while(t--)
{
cin>>l1;
cin>>l2;
c=0;
l=strlen(l1);
flag=0;first=0;
for(i=0;i<l;i++)
{
if(!first)
{
if(l1[i]=='#')
{
sw=1;first=1;
pos=i;
}
else if(l2[i]=='#')
{sw=0;pos=i;first=1;}
}
if(l1[i]=='#' && l2[i]=='#')
{
flag=1;
break;
}
}
if(flag)
{
printf("No\n");
continue;
}
else
{
for(i=pos;i<l;i++)
{
if(sw)
{
if(l2[i]=='#')
{
sw=0;
c++;
}
}
else
{
if(l1[i]=='#')
{
sw=1;
c++;
}
}
}
cout<<"Yes"<<endl;
cout<<c<<endl;
}
}
return 0;
}
