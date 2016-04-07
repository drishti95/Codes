#include <stdio.h>
int main()
{
long long int t,n,ar[100001],i,c,l,h,j;
int f=1;
scanf("%lld",&t);
while(t--)
{
    c=0;f=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(i=n;i<100001;i++)
        ar[i]=0;
        h=ar[0];
        l=ar[0];
    for(i=0;i<n;i++)
    {
       if(ar[i]>h)
        h=ar[i];
       else if(ar[i]<l)
        l= ar[i];
    }


printf("%lld\n",c);
}
return 0;
}
