#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long int t,n,a[100001],i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=n;i<100001;i++)
            a[i]=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                c+=2;
                i++;
            }
            else if(a[i]!=a[i-1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
