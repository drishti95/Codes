#include <stdio.h>
int main()
{
    long long int t,re,gr,bl,m,r[101],g[101],b[101],i,maxi,p;
    scanf("%lld",&t);
    while(t--)
    {
        fflush(stdin);
        scanf("%lld %lld %lld %lld",&re,&gr,&bl,&m);
        for(i=0;i<re;i++)
        {
            fflush(stdin);
            scanf("%lld",&r[i]);
        }
        for(i=0;i<gr;i++)
        {
            fflush(stdin);
           scanf("%lld",&g[i]);
        }
        for(i=0;i<bl;i++)
        {
            fflush(stdin);
            scanf("%lld",&b[i]);
        }
        while(m--)
      {
          maxi=0;p=0;
          for(i=0;i<re;i++)
          {
              if(r[i]>maxi)
              {
                  maxi=r[i];
                  p=1;
              }
          }
          for(i=0;i<gr;i++)
          {
              if(g[i]>maxi)
              {
                  maxi=g[i];
                  p=2;
              }
          }
          for(i=0;i<bl;i++)
          {
              if(b[i]>maxi)
              {
                  maxi=b[i];
                  p=3;
              }
          }
         if(p==1)
          {
            for(i=0;i<re;i++)
             r[i]=r[i]/2;
          }
          else if(p==2)
          {
              for(i=0;i<gr;i++)
               g[i]=g[i]/2;
          }
          else if(p==3)
          {
              for(i=0;i<bl;i++)
               b[i]=b[i]/2;

          }
    }


    maxi=0;
          for(i=0;i<re;i++)
          {
              if(r[i]>maxi)
              {
                  maxi=r[i];
              }
          }
          for(i=0;i<gr;i++)
          {
              if(g[i]>maxi)
              {
                  maxi=g[i];
              }
          }
          for(i=0;i<bl;i++)
          {
              if(b[i]>maxi)
              {
                  maxi=b[i];
              }
          }
          printf("%lld\n",maxi);

    }
return 0;
}
