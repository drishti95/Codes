#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,a,b,i;
cin>>n;
string s;
while(n--)
{
   cin>>s;
   a=0;b=0;
   for(i=0;i<s.length();i++)
   {
    if(s[i]=='a')
    a++;
    else
    b++;
   }
   a=(a<b)?a:b;
   cout<<a<<endl;
}

return 0;
}

