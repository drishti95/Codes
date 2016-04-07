#include <stdio.h>
int main()
{
long long int t,n,cf,cs;
scanf("%lld",&t);
while(t--)
{
cf=0;
cs=0;
scanf("%lld",&n);
if(n%28==0)
    printf("%lld",n);
else if((n%7)%4==0)
{
cf=n/7*7;
cs=n%7;
printf("%lld\n",cf);
}
else if(((n%11)%4==0)||((n%11)%7==0))
{
    cf=(n/11)*7+(n%11)%4;
    cs=(n/11)*4+(n%11)%7;
    printf("%lld\n",cf);
}
else
    printf("-1\n");

}
return 0;
}
