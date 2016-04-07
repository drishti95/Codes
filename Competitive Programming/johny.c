#include <stdio.h>
int main()
{
long long int t,n,ar[101],k,a;
scanf("%lld",&t);
while(t--)
{
int i,c,d;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&ar[i]);
}
scanf("%lld",&k);
a=ar[k-1];
for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (ar[d] > ar[d+1]) /* For decreasing order use < */
      {
        int swap = ar[d];
        ar[d]   = ar[d+1];
        ar[d+1] = swap;
      }
    }
  }
  for(i=0;i<n;i++)
  {
  if (ar[i]==a)
  printf("%d\n",i+1);
  }
}
return 0;
}
