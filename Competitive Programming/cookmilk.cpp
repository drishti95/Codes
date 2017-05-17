#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,f;
string s;
cin>>t;
while(t--)
{
cin>>n;
int ar[n];
for(i=0;i<n;i++)
{
cin>>s;
if(s=="cookie")
ar[i]=1;
else
ar[i]=0;
}
f=0;
for(i=0;i<n;i++)
{

    if((ar[i]==1 && i==n-1) || (ar[i]==1 && i!=n-1 && ar[i+1]!=0))
    {
    f=1;break;
    }

}
if(f==1)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}

return 0;
}
