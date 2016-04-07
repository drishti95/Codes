#include<stdio.h>
int main()

 {
     int x;
    float y;
    scanf("%d %f",&x,&y);
    if(x%5!=0)
        printf("%f",y);
    else if ((x+0.5)>=y)
         printf("%f",y);
    else
    {
        float n=y-x-0.50;
         printf("%f",n);
    }
    return 0;
}
