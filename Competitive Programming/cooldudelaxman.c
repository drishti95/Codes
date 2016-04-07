#include<stdio.h>
int main()
{
long long int t,k,n,p,i;
scanf("%lld",&t);
while(t--)
{
scanf("%lld %lld",&n,&k);
p=1;
for(i=1;i<=n;i++)
{
p=p*i;
if(p>k)
{
p=p/i;
i-=2;
}
}
if(p>1000000007)
printf("-1\n");
else
{
p=p%1000000007;
printf("%lld\n",p);
}
}

}
