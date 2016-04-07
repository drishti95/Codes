#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,n,a[26],i,c;
    char s[100001];
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%s",&s);
        n=strlen(s);
        for(i=0;i<26;i++)
            a[i]=0;
        for(i=0;i<n;i++)
            a[s[i]-97]=1;
        for(i=0;i<26;i++)
        {
            if(a[i]!=0)
                c++;
        }
        printf("%lld\n",c);
    }
    return 0;
}
