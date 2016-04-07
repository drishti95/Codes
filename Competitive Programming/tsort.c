#include<stdio.h>
long long int a[1000001],b[1000001];
int main()
{
	long long int n,i;

	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);

	for(i=0;i<n;i++)
		b[a[i]]++;
	for(i=0;i<1000001;i++)
	{
		while(b[i]>0)
		{
			printf("%lld\n",i);
			b[i]--;
		}
	}
	return 0;
}
