#include<stdio.h>
#include<math.h>
int main()
{

    long long int s,t,diff=0,maxi,n,a=0,b=0;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&s,&t);
        a=a+s;b=b+t;
        if(abs(b-a)>diff)
        {
             diff=abs(b-a);
             maxi=(a>b?1:2);
        }

    }
    printf("%lld %lld",maxi,diff);
    return 0;
}
