#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,k,d;
cin>>t;
while(t--)
{
cin>>n>>m>>k;
d=abs(n-m);
if(d<=k)
cout<<"0"<<endl;
else
cout<<d-k<<endl;
}
return 0;
}
