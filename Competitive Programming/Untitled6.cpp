#include<iostream>
#include<stdio.h>
int main()
{
    long int a[100000];
	long int n,k;
	int T,p;
	std::cin>>T;
	p=T;
	int v=0;
	while(p--)
	{
		std::cin>>n>>k;
		int m=n,z=k;
		int j=0;
		while(m--)
		{
			std::cin>>a[j];
		}
		int x=0;
		while(k--)
		{
			int y=a[x];
			a[x]=a[x+1];
			a[x+1]=y;
			if(a[x]>a[x+1])
			continue;
			if(x==n-2)
			 	 x=0;
				else
			 	 x=x+1;

		}
		int t=0;
		x=n-1;

		while(x)
		{
			if(a[x-1]>a[x])
			 t++;
			x--;
		}

        std::cout<<"Case "<<x+1<<":"<<t<<"\n";
	}
}
