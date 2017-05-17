#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,*ar,i,c,x,a;
cin>>t;
while(t--)
{
cin>>n;
c=0;a=0;
x=0;
ar=new long long int[n];
for(i=0;i<n;i++)
{
cin>>ar[i];
if(ar[i]==1)
c++;
if(c==i+1)
x++;
}
a=(n-c)*1000;
a+=(n-x)*100;
cout<<a<<endl;

}

return 0;
}
