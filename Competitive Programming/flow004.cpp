#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,sum;
cin>>t;
while(t--)
{
cin>>n;
sum=0;
sum+=n%10;
while(n>9)
{
n=n/10;
}
sum+=n;
cout<<sum<<endl;

}
return 0;
}
