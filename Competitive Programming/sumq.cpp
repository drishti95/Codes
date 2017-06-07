#include <bits/stdc++.h>
using namespace std;
void merge(long long int arr[], long long int l, long long int m,long long int r)
{
    long long int i, j, k;
   long long int n1 = m - l + 1;
   long long  int n2 =  r - m;

   long long int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
     i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(long long int arr[], long long int l, long long int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long long int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
int main() {
	long long int t,a[100000],b[100000],c[100000],p,q,r,i,j,k,sum,a1,a3;
	cin>>t;
	while(t--)
	{
		cin>>p>>q>>r;
		for(i=0;i<p;i++)
        scanf("%lld",&a[i]);
		for(j=0;j<q;j++)
        scanf("%lld",&b[j]);
		for(k=0;k<r;k++)
        scanf("%lld",&c[k]);
		sum=0;
		a1=0;a3=0;
		mergeSort(a,0,p-1);
        mergeSort(b,0,q-1);
	    mergeSort(c,0,r-1);
		i=0;k=0;
        for(j=0;j<q;j++)
        {
            while(i<p && a[i]<=b[j])
            {
            a1+=a[i];
            i++;
            }
            while(k<r && c[k]<=b[j])
            {
             a3+=c[k];
             k++;
            }
            sum=(sum+((a1+(i*b[j])%1000000007)%1000000007)*((a3+(k*b[j])%1000000007)%1000000007)%1000000007)%1000000007;

        }
		cout<<sum<<endl;
	}

	return 0;
}
