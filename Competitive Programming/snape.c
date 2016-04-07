#include<stdio.h>
#include <math.h>
int main()
{
    long long int t,b,ls,h,l;
    scanf("%lld",&t);
    double r,m;
    while(t--)
    {
        scanf("%lld %lld",&b,&ls);
        r = sqrt(pow(b,2)+pow(ls,2));
    h=ls;
    l=b;
        if(b>h)
        {
            h=b;
            l=ls;
        }
        m=sqrt(pow(h,2)-pow(l,2));
        printf("%lf %lf \n",m,r);
    }
    return 0;
}
