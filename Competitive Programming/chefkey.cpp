#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,m,c,i,x,f=0;
cin>>t;
while(t--)
{
cin>>n>>m>>c;
f=0;
for(i=1;i<=n;i++)
{
    x=c/i;
    if(c%i==0 && x<=m)
    f++;
}
cout<<f<<endl;
}
return 0;
}
