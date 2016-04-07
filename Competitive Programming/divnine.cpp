#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,sum,a;
char s[110000];
cin>>t;sum=0;
while(t--)
{
scanf("%s",&s);
        n=strlen(s);
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=s[i]-'0';
        }
if(sum<9 && n!=1)
a=9-sum;
else
{
sum=sum%9;
a=sum<(9-sum)?sum:(9-sum);
}
cout<<a<<endl;
}
return 0;
}
