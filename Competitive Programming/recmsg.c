#include<stdio.h>
#include<string.h>
int main()
{
long long int t,l,i,c;
char ar[1001];
scanf("%lld",&t);
while(t--)
{
scanf("%s",ar);
c=0;
l=strlen(ar);
for(i=0;i<l;i++)
{
  c=c+ar[i]-96;
}
printf("%lld\n",c);
}
return 0;
}
