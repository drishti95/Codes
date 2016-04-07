#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i,p;
char x[11],y[11];
cin>>t;
while(t--)
{
p=0;
cin>>x>>y;
for(i=0;i<strlen(x);i++)
{
if(x[i]==y[i]||x[i]=='?'||y[i]=='?')
continue;
else
{
p=1;
break;
}
}
if(p==1)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
return 0;
}
