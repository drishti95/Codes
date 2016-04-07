#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,y,x;
char s[1005];
cin>>t;
while(t--)
{
cin>>n;
y=0;x=0;
for(i=0;i<n;i++)
cin>>s[i];
for(i=0;i<n;i++)
{
if(s[i]=='Y')
y++;
else if(s[i]=='I')
x++;
}
if(x)
cout<<"INDIAN"<<endl;
else if(y)
cout<<"NOT INDIAN"<<endl;
else
cout<<"NOT SURE"<<endl;


}


return 0;
}
