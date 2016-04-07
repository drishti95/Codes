#include<stdio.h>
#include<math.h>
int main()
{
long long int t,n,ar[1001],i,j,d,max;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&ar[i]);
 int min = ar[0];
int max_diff = ar[1] -ar[0];
for(i=1;i<n;i++)
{
if(ar[i] - min > max_diff)
max_diff = ar[i] - min;

if(ar[i] < min)
min = ar[i];
}
printf("%d\n",max_diff);
}
return 0;
}
