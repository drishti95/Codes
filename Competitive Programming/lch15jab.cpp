#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,l,i;
string s;
int ar[26];
cin>>t;
while(t--)
{
cin>>s;
for(i=0;i<26;i++)
ar[i]=0;
l=s.length();
for(i=0;i<l;i++)
{
    ar[s[i]-97]++;
}
for(i=0;i<26;i++)
{
    if(ar[i]==(l-ar[i]))
    {
        cout<<"YES"<<endl;
        break;
    }

}
if(i==26)
cout<<"NO"<<endl;
}
return 0;
}
