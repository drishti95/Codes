#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,sum;
string s;
cin>>n;
while(n--)
{
cin>>s;
sum=0;
for(i=0;i<s.length();i++)
{
    sum+=(int)(s[i]-'a')%5;

}
cout<<sum<<endl;
}


return 0;
}
