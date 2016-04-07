#include <stdio.h>
#include <string.h>
int main()
{

long long int n,i,a,f,temp=0,count=0;
xhar s[];
scanf("%lld",&n);
scanf("%s",&s);
scanf("%lld %lld",&a,&f);
for(i=0;i<n;i++)
{
   if (s[i]=='L')
   count = count-a;
   if (s[i]=='R')
   count = count+a;

   if(count>f)
   {
     temp=1;
     printf("\nNO");
     break;
   }

}
if(temp==0)
print("YES");
   return 0;
}
