#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,r,*ar,i,c,j,x;
    int *R;
    cin>>n>>l>>r;
    x=r-l+1;
    R=new int[x];
    memset(R,0,x*sizeof(*R));
    ar=new long long int[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=0;i<n-1;i++)
    {
        for(j=(ar[i+1]-ar[i]+1);j<(ar[i+1]+ar[i]);j++)
        {
            if(j<=r && j>=l)
                R[j-l]=1;
        }
    }
    c=0;
    for(i=0;i<x;i++)
        if(R[i]==1)
            c++;
    cout<<c<<endl;
    return 0;
}

