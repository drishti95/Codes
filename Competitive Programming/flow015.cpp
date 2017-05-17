#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int y,n,i,leap=0;
        scanf("%d",&y);
        n=y-1900;
        for(i=1904;i<y;i++)
        {
            if((i%4==0&&i%100!=0)||(i%400==0))
                leap++;
        }
        n=(n+leap)%7;
        switch(n)
        {
            case 0:printf("monday\n");break;
            case 1:printf("tuesday\n");break;
            case 2:printf("wednesday\n");break;
            case 3:printf("thursday\n");break;
            case 4:printf("friday\n");break;
            case 5:printf("saturday\n");break;
            case 6:printf("sunday\n");break;
        }
        printf("\n");
    }
    return 0;
}

