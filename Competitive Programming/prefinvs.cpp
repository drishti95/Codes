#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,l,x,c;
string s;
cin>>s;
l=s.size();
c=0;x=0;

for(i=l-1;i>=0;i--)
{
if(s[i]=='0' && x==1)
{
x=0;c++;
}
else if(s[i]=='1' && x==0)
{
x=1;c++;
}
else
continue;
}
cout<<c<<endl;
return 0;
}

