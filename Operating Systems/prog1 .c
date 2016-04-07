#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int pid,pid2,status;
int main()
{
	int i,n,*a,d=0,l,r;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		a[i]=rand()%127;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		//printf("i");
	l=0;
	r=n-1;
if(r<10)
	d=Max(a,l,r);
else if(r>=10)
	{d=process(a,l,r);}
	waitpid(pid,&status,0);
	waitpid(pid2,&status,0);
	if(d==0)
	exit(0);
	printf("\nMAX=%d\n",d);
	return 0;
}

int Max(int *a,int l,int r)
{
	int max=0,i;
		for(i=l;i<=r;i++)
		{if(a[i]>max)
			max=a[i];
}
return max;
}
int max1(int a,int b)
{
	return a>b?a:b;
}

int process(int *a,int l,int r)
{
	int mid,d1=0,d2=0,res=0,d4=0,d3=0,d[4];
	if((r-l)<10)
		return(Max(a,l,r));//if size is less than 10 then compute the max and return//
	
	 if((r-l)>=10)//
	{	
		mid=(l+r)/2;
		if((pid=fork())==0)
		{
		printf("PARENT ID= %d\tCHILD ID=%d\n",getppid(),getpid());
			if((mid-l+1)<10)
				d3=Max(a,l,mid);
			else
				d1=(process(a,l,mid));

		}
		if((pid2=fork())==0)
		{
		printf("PARENT ID= %d\tCHILD ID=%d\n",getppid(),getpid());
			if((r-mid+2)<10)
				d4=Max(a,mid+1,r);
			else
				d2=(process(a,mid+1,r));

		}
	
	res=max1(d1,d2);
	res=max1(res,d3);
	res=max1(res,d4);
	return res;
	}
	
}

