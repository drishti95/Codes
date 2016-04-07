#include <stdio.h>
int main()
{
long long int t,n,a,m,i,x;
scanf("%lld",&t);
while(t--)
{
scanf("%lld %lld %lld",&n,&a,&m);
x=(m+a)%n;
if(x==0)
x=n;
printf("%lld\n",x);
}
return 0;
}
