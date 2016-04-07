#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,c,k;
    scanf("%d",&t);
    char j[101],s[101];
    while(t--)
    {
        c=0;
        scanf("%s %s",&j,&s);
        for(i=0;i<strlen(s);i++)
        {
            for(k=0;k<strlen(j);k++)
            {
              if(s[i]==j[k])
            {
                c++;
                break;
            }
            }
        }

        printf("%d\n",c);
    }
    return 0;
}
