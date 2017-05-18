#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%2==1 && b-a==1)
            cout<<"YES"<<endl;
        else if (b%2==1 && b-a==-1)
            cout<<"YES"<<endl;
        else if(abs(b-a)==2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

