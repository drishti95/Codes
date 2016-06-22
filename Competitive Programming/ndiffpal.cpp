#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,x,i;
string s = "abcdefghijklmnopqrstuvwxyz";
string a;
cin>>t;
while(t--)
{
cin>>n;
x=n/26;
a="";
while(x--)
a.append(s);
//strcat(a,s);
n=n%26;
for(i=0;i<n;i++)
a=a+s[i];
//strcat(a,s[i]);
cout<<a<<endl;
}
return 0;
}
