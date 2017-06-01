#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,m;
cin>>t;
string s;
while(t--)
{
cin>>s;m=0;n=0;
for(i=0;i<s.size();i++)
{
if(s[i]=='s')
{
n++;
}
else if(s[i]=='m')
{
m++;
if(s[i-1]=='s')
{
n--;
}
else if(s[i+1]=='s')
{
s[i+1]='*';
}
}
}
if(n>m)
cout<<"snakes"<<endl;
else if(m>n)
cout<<"mongooses"<<endl;
else
cout<<"tie"<<endl;

}
return 0;
}
