#include <stdio.h>
#include <string.h>
int main()
{
int t,l,i,ar[52],x,tot;
char s[201];
scanf("%d",&t);
while(t--)
{
tot=0;
scanf("%s",s);
l=strlen(s);
for(i=0;i<52;i++)
ar[i]=0;
for(i=0;i<l;i++)
{
char ch=s[i];
if(ch>=65 && ch<=90)
x=(int)ch-65;
if(ch>=97 && ch<=122)
x=(int)ch-97+26;
ar[x]++;
}
for(i=0;i<52;i++)
{
if(ar[i]%2==0)
tot=tot+ar[i]/2;
else
{
ar[i]++;
tot=tot+ar[i]/2;
}
}
printf("%d\n",tot);
}
return 0;
}
