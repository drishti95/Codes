#include <stdio.h>
#include <string.h>
int main()
{
    long long int t,n,i;
    char tr[27],s[101];
    scanf("%lld %s",&t,&tr);
    while(t--)
    {
        scanf("%s",&s);
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]==95)
             printf(" ");
            else if(s[i]>=65 && s[i]<=90)
                printf("%c",(tr[s[i]-65]-32));
            else if(s[i]>=97 && s[i]<=122)
                printf("%c",tr[s[i]-97]);
            else
                printf("%c",s[i]);

        }

      printf("\n");
    }
    return 0;
}
