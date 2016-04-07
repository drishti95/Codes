#include<stdio.h>
#include<string.h>
int main()
{
    long int t,n,i,j,c,d;
    scanf("%ld",&t);
    char s[1001];
    while(t--)
    {
        scanf("%s",&s);
        c=0;
        for(i=0;i<strlen(s)-1;i++)
        {
            d=s[i+1]-s[i];
            if(d<0)
                d=d+26;
            c=c+d;
        }
        c=c+strlen(s)+1;

        if(c<=(11*strlen(s)))
        printf("YES\n");
        else
        printf("NO\n");

    }
    return 0;
}
