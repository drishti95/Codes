#include <stdio.h>
int merge(long long int [],long long int ,long long int ,long long int );
int part(long long int [],long long int ,long long int );
long long int t,n,i,j,arr[100000],temp,sum;
int main()
{

    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);

        part(arr,0,n-1);

        for(i=0;i<=n;i+=2)
           sum=sum+arr[i];

        printf("%lld\n",sum);
    }

    return 0;

}
int part(long long int arr[],long long int min,long long int max)
{
long long int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
 return 0;
}
int merge(long long int arr[],long long int min,long long int mid,long long int max)
{
  long long int tmp[100000];
  long long int i,j,k,m;
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];

return 0;
}


