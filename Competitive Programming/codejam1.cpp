#include<bits/stdc++.h>
using namespace std;
int ar[10]={0,0,0,0,0,0,0,0,0,0};

int isLeft()
{
    for(int k=0;k<10;k++)
    {
        if(ar[k]==0)
        return 1;
    }
    return 0;
}

void digits(long long int n)
{
    while(n>0)
    {
        ar[n%10]=1;
        n=n/10;
    }
}

int main()
{
    long long int t,n,i=1,z;
    cin>>t;
    while(i<=t)
    {
        cin>>n;
        for(int j=0;j<10;j++)
        ar[j]=0;
        printf("Case #%lld: ",i);
        z=0;
        if(n==0)
        cout<<"INSOMNIA\n";
        else
        {
            while(isLeft())
            {

                z+=n;
                digits(z);
            }
            cout<<(z)<<endl;
        }
        i++;
    }
    return 0;
}
