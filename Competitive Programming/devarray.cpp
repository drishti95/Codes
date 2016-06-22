#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,q,*ar,i,mi,ma,x;
cin>>n>>q;
ar=new long long int[n];
cin>>ar[0];
mi=ar[0];
ma=ar[0];
for(i=1;i<n;i++)
{
cin>>ar[i];
if(ar[i]<mi)
mi=ar[i];
if(ar[i]>ma)
ma=ar[i];
}
while(q--)
{
cin>>x;
if(x>=mi && x<=ma)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;

}
return 0;
}
