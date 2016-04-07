#include <stdio.h>
#include <math.h>
int main()
{
long int a,b,c;
scanf("%ld %ld",&a,&b);
c=abs(a-b);
if(c%10!=9)
c++;
else
c--;
printf("%ld",c);
return 0;
}
