#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,ar[101],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[i]+ar[j]==k &&(i!=j))
            {
                printf("YES");
                exit(0);
            }
        }
    }
    printf("NO");
    return 0;
}
