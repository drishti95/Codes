#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,sum,i;
cin>>t;
while(t--)
{
cin>>n;
sum=0;
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
        sum++;break;
    }

}
if(sum==0)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;

}
return 0;
}
