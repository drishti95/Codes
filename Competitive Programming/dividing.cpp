#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,su,a,x;
cin>>n;
x=(n*(n+1))/2;
su=0;
while(n--)
{
cin>>a;
su=su+a;
}
if(x==su)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
