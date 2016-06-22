#include <stdio.h>

int main(void) {
	int on,t,n,i,counter;
	int a[100000];
	scanf("%d",&t);
	while(t--)
	{
		on = 0;
		counter = 0;
		scanf("%d", &n);
		for(i=0;i<n;i++)
		scanf("%d", &a[i]);

		if(n<=3)
		{
			if(n<3)
			printf("No\n");
			if(n==3)
			{
				if(a[0]==a[1] && a[1]==a[2])
				{
					printf("Yes\n");
				}
				else
				printf("No\n");
			}
		}
		else
		{
			for(i=0;i<n-2;i++)
			{
				if(a[i]==a[i+1] && a[i]==a[i+2])
				{
					on = 1;
					break;
				}
			}
			if(on)
			printf("Yes\n");
			else
			printf("No\n");
		}
	}
	return 0;
}
