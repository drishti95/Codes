#include <iostream>
#include <iomanip>
using namespace std;
void merge(long long int y[], long long int l, long long int m, long long int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;
    /* create temp yays */
    long long int L[n1], R[n2];
    /* Copy data to temp yays L[] and R[] */
    for(i = 0; i < n1; i++)
    {
        L[i] = y[l + i];
    }
    for(j = 0; j < n2; j++)
    {
       R[j] = y[m + 1+ j];
    }
    /* Merge the temp yays back into y[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            y[k] = L[i];
            i++;
        }
        else
        {
            y[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        y[k] = L[i];
        i++;
        k++;
    }
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        y[k] = R[j];
        j++;
        k++;
    }
}
/* l is for left index and r is right index of the sub-yay
  of y to be sorted */
void mergeSort(long long int y[], long long int l, long long int r)
{
    if (l < r)
    {
        long long int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(y, l, m);
        mergeSort(y, m+1, r);
        merge(y, l, m, r);
    }
}
long long int bsearch(long long int y[], long long int N, long long int VAL)
{
	long long int Mid,Lbound=0,Ubound=N-1;
	while(Lbound<=Ubound)
	{
		Mid=(Lbound+Ubound)/2;
		if(VAL>y[Mid])
			Lbound=Mid+1;
		else if(VAL<y[Mid])
			Ubound=Mid-1;
		else
			return Mid;
	}
	return 0;
}
int main()
{
  long long int t,n,v,*x,*y,i,a,b,p,mi;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=n;
        x=new long long int[n];
        y=new long long int[n];
        for(i=0;i<n;i++)
        {
            x[i]=-999999;
            y[i]=-999999;
        }
        while(n)
        {
            cin>>v;
            mi=999999;
            for(i=0;i<v;i++)
            {
                cin>>b;
                cin>>b;
                 if(b>y[p-n])
                 {
                  x[p-n]=b;
                  y[p-n]=b;
                 }
                 if(b<mi)
                 mi=b;
            }
            x[p-n]-=mi;
            y[p-n]-=mi;
            n--;
        }

         mergeSort(y,0,p-1);
         for(i=0;i<p;i++)
        {

            a=(bsearch(y,p,x[i]));
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}
