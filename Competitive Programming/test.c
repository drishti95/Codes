#include<stdio.h>
int main()
{
    int n;

    do
    {
        scanf("%d",&n);
       if (n==42)
            break;
       printf("%d\n",n);
    }while(1);
    return 0;
}
