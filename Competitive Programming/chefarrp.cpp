#include<iostream>
using namespace std;
int main()
{
    int t,n,a[10000],c,sum,pr;
    cin>>t;
    while(t--)
    {    c=0;

        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {    sum=0;pr=1;
            for(int j=i;j>=0;j--)
            {
               sum=sum+a[j];
               pr=pr*a[j];
               if(sum==pr)
                c++;
            }
        }
        cout<<c<<endl;
    }
  return 0;
}

