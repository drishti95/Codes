#include<bits/stdc++.h>
using namespace std;
int isPerfectSquare(long long int n)
{
    long long int h = n & 0xF;  // h is the last hex "digit"
    if (h > 9)
        return 0;
    // Use lazy evaluation to jump out of the if statement as soon as possible
    if (h != 2 && h != 3 && h != 5 && h != 6 && h != 7 && h != 8)
    {
        long long int t = (long long int) floor( sqrt((double) n) + 0.5 );
        return t*t == n;
    }
    return 0;
}
int main()
{
long long int t,n,i,p;
double x;
cin>>t;
while(t--)
{
scanf("%lld",&n);
p=0;
for(i=1;i<n;i++)
{
x=n*n-i*i;
if(isPerfectSquare(x))
{
p=1;
break;
}
}
if(p)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
