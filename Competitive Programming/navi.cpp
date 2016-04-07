#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    long long int *a,i,ans,j,c,l,r;
    cin>>t;
    x=t;
    while(t--)
    {
    cin>>n;
    a=new long long int[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
     ans = LONG_LONG_MIN;
     sort(a);
    for (i=0; i<n; i++)
    {
        c = 0;
        for (j=i; j<n; j++)
        {
            c = c ^ a[j];
            if(c>ans && j==i+3)
            {
                l=i+1;
                r=j+1;
                ans=c;
            }


        }
    }
    cout<<"Case #"<<(x-t)<<endl;
    cout<<l<<" "<<r<<" "<<ans<<endl;

    }

    return 0;
}
