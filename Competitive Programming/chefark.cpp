#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
long long int mi(long long int a,long long int b)
{
    return (a<b)? a: b;
}
long long int combi(long long int n,long long int k)
{
    long long int C[k+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (long long int i = 1; i <= n; i++)
    {
        for (long long int j = mi(i, k); j > 0; j--)
            C[j] = (C[j] + C[j-1])%M;
    }
    return C[k]%M;
}
int main()
{
long long int t,n,k,*ar,i,p,c,x,z;
combi(100000,100000);
cin>>t;
while(t--)
{
cin>>n>>k;
ar=new long long int[n];
c=0;
for(i=0;i<n;i++)
{
cin>>ar[i];
if(ar[i]==0)
c++;
}
p=0;
x=k;
if(x>n)
{
while(x>n)
x-=2;
}
while(x>=0)
{
p=(p+combi(n,k))%M;
x-=2;
}
if(c>0)
{
z=(long long int)(pow(2,c-1))%M;
p=(p/z)%M;
}
cout<<p<<endl;
}
return 0;
}
