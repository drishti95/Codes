#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,*ar,*f,i,*temp,k,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ar=new long long int[n];
        f=new long long int[n];
        temp=new long long int[n];

        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            f[i]=0;
            temp[i]=0;

        }
        f[0]=ar[0];
        temp[0]=ar[0];
        for(i=1;i<n;i++)
        {
                f[i]=(ar[i]>f[i-1]+ar[i])?ar[i]:f[i-1]+ar[i];
                temp[i]=(f[i-1]>temp[i-1]+ar[i])?f[i-1]:temp[i-1]+ar[i];
        }
        k=f[0];
        for(i=0;i<n;i++)
        {
            if(f[i]>k)
            k=f[i];
            if(temp[i]>k)
            k=temp[i];
        }
        cout<<k<<endl;
    }
    return 0;
}

