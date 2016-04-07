#include<stdio.h>

int main()
{
   long long int n,c=0;
    scanf("%lld",&n);
    int x1,x2,x3,y1,y2,y3;
    while(n--)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        if(((x1 - x2)*(x2 - x3)) + ((y1 - y2)*(y2 - y3)) == 0 || ((x2 - x3)*(x3 - x1)) + ((y2 - y3)*(y3 - y1)) == 0 || ((x3 - x1)*(x1 - x2)) + ((y3 - y1)*(y1 - y2)) == 0)
                c++;
    }
    printf("%d",c);

    return 0;
}
