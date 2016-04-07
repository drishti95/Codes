
#include<stdio.h>

int main()
{
int (*B)[2];
int A[2];
printf("%d\n",**B);

B++;
printf("%d",**B);
//A++;
//printf("%d",B[0]);
return 0;
}
