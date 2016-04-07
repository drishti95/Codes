#include<stdio.h>
#include<math.h>
int main()
{
    int t,s,c,k,f,n,m;
    scanf("%d",&t);
    while(t--)
    {
        n=0;
       scanf("%d %d %d",&s,&c,&k);
       if(s>c)
        m=s;
       else
        m=c;
        long double  si,i,j;
        si=22/7*pow(2,m);
        for(j=0;j<=44/7;j+=si)
           {
               f=0;
               for(i=0;i<s;i++)
               {
                    if(sin(pow(2,i)*j)==0)
                     f++;
               }
               for(i=0;i<c;i++)
                {
                    if(cos(pow(2,i)*j)==0)
                  f++;
                }
             if(f>=k)
                n++;
            }
            printf("%d\n",n);
           }
        return 0;
}
