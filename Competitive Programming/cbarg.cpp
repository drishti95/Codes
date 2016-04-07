#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long int t,n,*ar,i,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ar=new long long int[n];
        m=0;
        for(i=0;i<n;i++)
        {
             cin>>ar[i];
             if(i!=0 && (ar[i]-ar[i-1])>0)
                m+=ar[i]-ar[i-1];
             else if(i==0)
                m=ar[i];

        }
        cout<<m<<endl;

    }
    return 0;
}
