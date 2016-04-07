#include <stdio.h>

int main()
{
   long long int t,x,y;
   scanf("%lld",&t);
   while(t--)
   {
       scanf("%lld %lld",&x,&y);
       if(x==0 && y==0)
        printf("YES\n");
       else if(x<0)
       {
           if(x%2==1)
            {
                int i = (x-1)/2;
                if( y >= -2*i && y <= 2*i + 2)
                    printf("\nYES");
            }
           else
        {
            if(x%2==0)
            {
                int i = -x/2;
                if(y >= -2*i && y<= 2*i)
                      printf("\nYES");
            }
        }}
           else if(y > 0)
            {
                if(y%2 == 0)
                {
                    int i = y/2;
                    if(x >= -2*i && x <= 2*i - 1)
                        printf("\nYES");
                }

            else
            {
                if(y%2 == 0)
                {
                    int i = -y/2;
                    if(x >= -2*i && x <= 2*i+1)
                        printf("\nYES");
                }
            }}
            else
                printf("\NO");
   }
   return 0;
}
