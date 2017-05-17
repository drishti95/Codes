#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,d,s;
cin>>t;
while(t--)
{
cin>>d>>n;
while(d--)
{
    s=(n*(n+1))/2;
    n=s;
}
cout<<s<<endl;
}
return 0;
}
