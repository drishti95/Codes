#include<stdio.h>
#include<math.h>
int main()
{
long long int t,n,c,a[21],i,diff,min;
scanf("%lld",&t);
while(t--)
{
scanf("%lld %lld",&n,&c);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
min=999999999;

for(i=0;i<n;i++)
{
diff=c;
diff=diff-a[i];
for(j=0;j<n;j++)
{
     if(diff<0)
     {
     diff =c;

     }
}
}
}
return 0;
}
