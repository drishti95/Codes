#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,k,x,i,dig,j;
cin>>t;
while(t--)
{
cin>>k;
x=0;
for(i=0;i>-1;i+=2)
{
for(j=i;j>0;j=j/10)
{
dig=j%10;
if(dig%2)
break;
}
if(j==0)
x++;
if(x==k)
break;
}
cout<<i<<endl;
}
return 0;
}
