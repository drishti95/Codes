#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,c,x,i;
cin>>t;
while(t--)
{
cin>>n;
c=0;
for(i=0;i<n;i++)
{
cin>>x;
c*=10;
c+=x;
}


cout<<c<<endl;
}

return 0;
}

