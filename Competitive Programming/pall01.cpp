#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,sum,a;
cin>>t;
while(t--)
{
cin>>n;
a=n;
sum=0;
while(n>0)
{
sum*=10;
sum+=n%10;
n=n/10;
}
cout<<sum<<a<<endl;
if(sum==a)
cout<<"wins"<<endl;
else
cout<<"losses"<<endl;

}
return 0;
}
