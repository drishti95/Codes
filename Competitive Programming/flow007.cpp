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

while(n>0)
{
sum*=10;
sum+=n%10;
n=n/10;
}

cout<<sum<<endl;

}
return 0;
}
