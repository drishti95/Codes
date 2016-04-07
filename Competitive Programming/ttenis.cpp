#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,p,w,l;
cin>>t;
char s[105];
while(t--)
{
cin>>s;p=0;w=0;
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='0')
p++;
else
w++;
}
if(p>w)
cout<<"LOSE"<<endl;
else
cout<<"WIN"<<endl;

}
return 0;
}
