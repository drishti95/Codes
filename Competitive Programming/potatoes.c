#include<stdio.h>
int main()
{
    long long int t,x,y,j,i,s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&x,&y);

        for(i=1;;i++)
        {
            s=x+y+i;
            for(j=2;j<s;j++)
            {
                if(s%j==0)
                    break;
            }
            if(j==s)
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}
