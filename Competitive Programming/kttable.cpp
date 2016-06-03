#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,*ar,*br,c,p,i,x;
cin>>t;
while(t--)
{
    cin>>n;
    ar=new long long int[n];
    br=new long long int[n];
    c=0;
    for(i=0;i<n;i++)
    cin>>ar[i];
    p=0;
    for(i=0;i<n;i++)
    {
       cin>>br[i];
       x=ar[i]-p;
       p=ar[i];
       if(br[i]<=x)
       c++;

    }
    cout<<c<<endl;

}
return 0;
}
