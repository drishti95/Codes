#include <stdio.h>
#include<string.h>

int main()
{
    int t,l,i,pos1,pos2;
    char s[400];
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&s);
        l=strlen(s);
        while(s[l-1]==')')
    {
          for(i=0;i<l;i++)
        {
           if (s[i]=='(')
                pos1=i;
           if (s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='^'||s[i]=='*'||s[i]=='%')
            pos2=i;

           else if(s[i]==')'&& s[pos2]!=' ')
            {
              s[i]==' ';
              s[pos1]=' ';
              s[i]=s[pos2];
              s[pos2]=' ';
            }
        }

    }
    for(i=0;i<l;i++)
            if (s[i]!=' ')
            printf("%c",s[i]);
        printf("\n");
    }
}
