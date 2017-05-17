#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b){
    if (b == 0) return a;
    else return gcd(b,a % b);
}

long long int lca(long long int a,long long int b){
    return (a * b) / gcd(a,b);
}

int main()
{
long long int t,n,i,x,k,j;
cin>>t;
while(t--)
{
cin>>n;
long long int ar[n];
for(i=0;i<n;i++)
{
cin>>ar[i];
}
k=LONG_LONG_MAX;
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                x=lca(ar[i], ar[j]);
                k =k<x?k:x;
            }
        }
cout<<k<<endl;
}
return 0;
}
