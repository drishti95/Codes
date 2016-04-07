#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long power(long long a,long long b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    long long temp=power(a,b/2);
    temp=(temp*temp)%mod;
    if(b%2)
        temp=(temp*a)%mod;
    return temp;
}
int main()
{
long long int t,n,x;
cin>>t;
while(t--)
{
cin>>n;
x=power(2,n);
cout<<x-1<<endl;

}

return 0;
}
