#include<bits/stdc++.h>
using namespace std;
unsigned long long int nextPowerOf2(unsigned long long int n)
{
    unsigned long long int p = 1;
    if (n && !(n & (n - 1)))
        return n;

    while (p < n)
        p <<= 1;

    return p;
}
int main()
{
unsigned long long int t,n,k,d,k2;
cin>>t;
while(t--)
{
cin>>n;
k=nextPowerOf2(n);
k2=k/2;
d=(k-n)<(n-k2)?(k-n):(n-k2);
cout<<d<<endl;

}


}
