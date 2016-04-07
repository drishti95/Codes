#include <stdio.h>
int main()
{
    int n,k,x,c=0;
    scanf("%d %d",&n,&k);
    while(n--)
    {
        scanf("%d",&x);
        if((x%k)==0)
            c++;
    }
    printf("%d",c);
    return 0;
}
