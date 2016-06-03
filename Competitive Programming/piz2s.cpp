#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,*ar,i,sum;

        cin>>n;
        ar=new long long int[n];
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }

        if(sum%2)
        sum=(sum/2)+1;
        else
        sum=sum/2;
        if(sum<n)
        sum=n;
        cout<<sum<<endl;

return 0;
}
