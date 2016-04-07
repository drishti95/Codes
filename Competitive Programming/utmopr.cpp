#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,k,a,s;
cin>>t;
while(t--)
{
cin>>n>>k;
s=0;
while(n--)
{
cin>>a;
s=s+a;
}
if(k==1 && s%2==0)
cout<<"odd"<<endl;
else
cout<<"even"<<endl;

}

return 0;
}
