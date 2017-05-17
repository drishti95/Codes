#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,i;
int ar[26]={0};

string s,w;
cin>>s;
cin>>n;
for(i=0;i<s.size();i++)
{
ar[s[i]-'a']=1;
}
while(n--)
{
cin>>w;
for(i=0;i<w.size();i++)
{
if(ar[w[i]-'a']==0)
{
cout<<"No"<<endl;
break;
}
}
if(i==w.size())
cout<<"Yes"<<endl;
}

return 0;
}
