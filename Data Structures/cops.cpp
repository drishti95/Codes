#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int t,ar[101],m,x,y,i,a,c,p,j;
cin>>t;

while(t--)
{
cin>>m>>x>>y;
p=x*y;
for(i=0;i<101;i++)
ar[i]=0;
for(i=0;i<m;i++)
{
cin>>a;
ar[a]=1;
for(j=1;j<=100;j++)
{
if(j>=a-p && j<= a+p)
ar[j]=1;
}
}
c=0;
for(i=1;i<=100;i++)
{
if(ar[i]==0)
c++;
}
cout<<c<<endl;


}
return 0;
}
