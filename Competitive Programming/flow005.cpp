#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,sum,i;
cin>>t;
int ar[6]={100,50,10,5,2,1};
while(t--)
{
cin>>n;
sum=0;
i=0;
while(n>0)
{
sum+=n/ar[i];
n=n%ar[i];
i++;
}
cout<<sum<<endl;
}
return 0;
}

