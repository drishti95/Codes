#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,i,n,a,flag;
cin>>t;
while(t--)
{
cin>>n;
flag=1;
for(i=1;i<=n;i++)
{
scanf("%lld",&a);
if(abs(a-i)>1)
flag=0;
}
if(flag)
printf("YES\n");
else
printf("NO\n");

}
return 0;
}
