#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,r,sum=0,k;
    cin>>t;
    while(t--)
        {
           cin>>n>>m;
           sum=0;
           for(int i=n;i<=m;i++)
           {
               k=i;
               r=0;
            while(k!=0)
            {
               r=r*10;
               r=r+k%10;
               k=k/10;
            }
            if(r==i)
            sum+=r;
            }
        cout<<sum<<endl;

    }
return 0;
}
