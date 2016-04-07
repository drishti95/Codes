#include <stdio.h>
int main()
{
int t ;
long long int a,n,i,m,max=0;
scanf("%d",&t);
while(t--)
{
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
  {
      m=n%i;
      if (m>=max)
      {
         max=m;
         a=i;
      }
  }
  printf("%lld\n",a);
}

}
