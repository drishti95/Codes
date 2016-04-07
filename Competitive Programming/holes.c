#include <stdio.h>
#include <string.h>
int main()
{
    int t,sum=0,i;
  char ar[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&ar);
        i=strlen(ar);
        sum=0;
        while(i--)
            {
                if(ar[i]=='E'||ar[i]=='w'||ar[i]=='T'||ar[i]=='Y'||ar[i]=='U'||ar[i]=='I'||ar[i]=='S'||ar[i]=='F'||ar[i]=='G'||ar[i]=='H'||ar[i]=='J'||ar[i]=='K'||ar[i]=='L'||ar[i]=='Z'||ar[i]=='X'||ar[i]=='C'||ar[i]=='V'||ar[i]=='N'||ar[i]=='M')
            sum=sum+0;
            if(ar[i]=='A'||ar[i]=='Q'||ar[i]=='R'||ar[i]=='O'||ar[i]=='P'||ar[i]=='D')
                sum=sum+1;
            else if(ar[i]=='B')
                sum+=2;
            }
        printf("\n%d",sum);
    }
    return 0;
}
