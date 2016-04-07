#include<stdio.h>
#include<string.h>
int main()
{
int t;
long long int i,l,j,do,de,co,ce,pos;
char s[100000]
scanf("%d",&t);
while(t--)
{
    scanf("%s",&s);
    do=1;de=1;c0=1;ce=1;pos=1;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
       if(i%2==0)
       {
         if(ar[i]=='l')
            pos=pos+de;
         if(ar[i]=='r')
         {

             do+=2;
             de+=2;
             pos=pos+de;
         }

       }

    }
}

}
