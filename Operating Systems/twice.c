#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/ipc.h>
char *conv(int n);
int co(char *arr);
char arr[100];
int main( int argc, char * argv[])
{
 int i,k=0,l;
  printf("executing twice PID=%u\n",getpid());
 int p= co(argv[argc-1]);
 p=p*2;
 if(argc==1)
  {
   printf("%d\n",p);
   exit(0);
  }
    char *arg[argc];
    for(i=1;i<argc-1;i++)
    {  
        l= strlen(argv[i]);
	arg[k]=(char*) malloc(l*sizeof(char));
        strcpy(arg[k++],argv[i]);
    }
    char *st=conv(p);
    l= strlen(st);
    arg[k]=(char*) malloc(l*sizeof(char)); 
     strcpy(arg[k++],st);
    arg[k]=NULL;
    char gh[100];
    gh[0]='.';
    gh[1]='/';
    gh[2]='\0';
    strcat(gh,argv[0]);
    execvp(gh,arg);

return 0;
}


char *conv(int n)
{
  int p,k=0,i,j;
  
  char t;
  while(n!=0)
{
    p=n%10;
    arr[k++]=p+'0';
    n=n/10;
}
arr[k]='\0';
for(i=0,j=k-1;i<k/2;i++,j--)
{
  t= arr[i];
  arr[i]= arr[j];
  arr[j]= t;
}
 return arr;
}

int co(char *arr)
{
     int p=0,l,k,i;
     l=strlen(arr);
     for(i=0;i<l;i++)
{
       p=(p*10)+arr[i]-'0';
}
return p;
}
     

