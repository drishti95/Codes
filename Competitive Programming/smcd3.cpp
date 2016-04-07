#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,n,s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        s=n*(n+1)/2;
        cout<<s<<endl;
    }

    return 0;
}
