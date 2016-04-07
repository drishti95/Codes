#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
int t,l1,mi,ma,i;
char s1[105],s2[105];
cin>>t;
while(t--)
{
cin>>s1>>s2;
l1=strlen(s1);
ma=l1;mi=l1;
for(i=0;i<l1;i++)
{
if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i])
continue;
else if (s1[i]!='?' && s2[i]!='?' && s1[i]==s2[i])
{
ma--;
mi--;
}
else if(s1[i]=='?' || s2[i]=='?')
mi--;
}
cout<<mi<<" "<<ma<<endl;
}
return 0;
}
