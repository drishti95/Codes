#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,*ar,i,br[1001],c,p;
cin>>t;
while(t--)
{
cin>>n;
ar=new long long int[n];
memset(br,0,sizeof(br));
for(i=0;i<n;i++)
cin>>ar[i];
for(i=0;i<n;i++)
br[ar[i]]++;
c=0;p=1;
for(i=1000;i>=0 && c<2;i--)
{
 if(br[i]>3 && c==0)
 {
  c=2;
  p=i*i;
  break;
 }
 else if(br[i]>1)
 {
    c++;
    p*=i;
 }
}
if(c<2)
cout<<-1<<endl;
else
cout<<p<<endl;
}

return 0;
}
