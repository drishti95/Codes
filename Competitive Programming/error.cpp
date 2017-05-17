#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t,n,i,f;
cin>>t;
string s;
while(t--)
{
cin>>s;
n=s.size();
f=0;
for(i=0;i<n-2;i++)
{
if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')||(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'))
{
f=1;
break;
}
}
if(f)
cout<<"Good"<<endl;
else
cout<<"Bad"<<endl;
}
return 0;

}
