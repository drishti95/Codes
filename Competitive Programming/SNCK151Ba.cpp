#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
long long int t,n,*ar,i,p,z;
cin>>t;
while(t--)
{
    cin>>n;
    ar=new long long int[n];
    p=0;z=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==0)
            z++;
        else
            p++;
    }

    if(p%2==0)
        cout<<z<<endl;
    else
        cout<<p<<endl;

}

return 0;
}
