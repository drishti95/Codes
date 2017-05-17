#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,*ar,s=0,i;
cin>>t;
while(t--)
{
cin>>n;
ar=new long long int[n];
s=0;
for(i=0;i<n;i++)
cin>>ar[i];
for(i=0;i<n;i++)
{
if(ar[i]%2)
s++;
}
if(s%2)
cout<<s<<endl;
else
cout<<n-s<<endl;

}
return 0;
}

