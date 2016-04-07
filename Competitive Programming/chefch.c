#include <stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[100001];
    long long int l,i,s1,s2;
    while(t--)
    {
        scanf("%s",&s);
        l=strlen(s);
        s1=0;s2=0;
        for(i=0;i<l;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='+')
                    s2++;
                else
                    s1++;
            }
            else
            {
                if(s[i]=='+')
                    s1++;
                else
                    s2++;
            }
        }
           if(s1>s2)
            printf("%lld\n",s2);
           else
            printf("%lld\n",s1);

    }
    return 0;
}

