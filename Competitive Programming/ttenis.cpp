#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,p,w,l;
cin>>t;
char s[105];
while(t--)
{
cin>>s;p=0;w=0;i=0;
l=strlen(s);
while(i<l)
{
if(s[i]=='0')
p++;
else
w++;
if(p==10 && w==10)
{
    p=9;w=9;
}
if(p==11||w==11)
break;
i++;
}
if(w==11)
cout<<"WIN"<<endl;
else
cout<<"LOSE"<<endl;
}
return 0;
}
