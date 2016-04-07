#include<stdio.h>
#include<stdlib.h>
int main()
{
long long int ma,mi,t,n,i,a;
scanf("%lld",&t);
while(t--)
{
//long long int a[100001];
scanf("%lld",&n);
long long int b[1000005];
mi=0;ma=0;
for(i=0;i<1000002;i++)
b[i]=0;
for(i=0;i<n;i++)
{
scanf("%lld",&a);
b[a]=1;

}

for(i=0;i<1000001;i++)
{
if(b[i]==1)
{
ma++;
i++;
}
}
int c=0;
for(i=0;i<1000001;i++)
{
			if(i<=999998 && b[i]==1 && b[i+1]==1 && b[i+2]==1)
			{
				mi++;
				i=i+2;
			}
			else if(b[i])
			{
                mi++;
                i++;
		    }
		}

printf("%lld %lld\n",mi,ma);
}

return 0;
}
