#include <stdio.h>
#include <string.h>
int main()
{
     char s[1000]="",q[1000]="",a[1000]="";
    int n,i,j,c=0,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
             scanf("%s",&q);
       if(q[1]==0 && i!=1)
       {
            i--;
       }

       if (q[0]== '+')
       {
           x=2;
           for (j=2;j<strlen(q);j++)
            a[c++]=q[j];
           for(j=strlen(s);j>=q[1];j--)
           {
              s[(j+strlen(a))]=s[j];
           }
          for(j=q[1];j<(q[1]+strlen(a));j++)
          s[j]=q[x++];

       }
       if(q[0]=='?')
       {
           c=0;
           for(j=q[1];c<q[2];c++,j++)
            printf("%c",s[j]);


       }
       printf("/n");
           }

return 0 ;
}

