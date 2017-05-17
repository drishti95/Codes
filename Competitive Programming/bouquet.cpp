#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int t,ar[3][3],i,j,s,a;
cin>>t;
while(t--)
{
s=0;
for(i=0;i<3;i++)
{
a=0;
for(j=0;j<3;j++)
{
cin>>ar[i][j];
a+=ar[i][j];
}
s=s<a?a:s;
}
for(i=0;i<3;i++)
{
a=0;
for(j=0;j<3;j++)
a+=ar[j][i];
s=s<a?a:s;
}
if(s%2==0 && s!=0)
cout<<s-1<<endl;
else
cout<<s<<endl;
}

return 0;
}
