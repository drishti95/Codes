#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,ma,ar[10000];
cin>>t;
while(t--)
{
cin>>n;ma=1;
for(i=0;i<n;i++)
{
  cin>>ar[i];
if(i!=0 && ar[i]<=ar[i-1])
ma++;
else if(i!=0)
ar[i]=ar[i-1];
}
cout<<ma<<endl;
}
return 0;
}

