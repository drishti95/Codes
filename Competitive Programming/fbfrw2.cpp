#include<iostream>
#include<iomanip>
using namespace std;
void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(int *a, int low, int high, int mid)
{
    int i,j,k,c[50000];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
           c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
   while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)

    {
        a[i] = c[i];
    }
}
int main()
{
int t,n,ar[50000],i,k;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++)
cin>>ar[i];
mergesort(ar,0,n);
  k=0;
 while(k<n)
 {
  if(ar[k]==0)
  {
  cout<<"Killed "<<k<<endl;;
  break;
  }
  else
  {
  ar[k]=-1;
  k++;
  for(i=k;i<n;i++)
  ar[i]--;
  }
}
if(k==n)
cout<<"Bhai Ho!"<<endl;
}
return 0;
}
