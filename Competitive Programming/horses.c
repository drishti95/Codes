#include<stdio.h>
#include<math.h>
int main()
{
long long int t,n,ar[5001],i,diff,mini,j;
scanf("%lld",&t);
while(t--)
{
diff=0;mini=1000000000;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&ar[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
diff=abs(ar[j]-ar[i]);
if(diff<mini)
mini=diff;
}
}
printf("%lld\n",mini);
}
return 0;
}
