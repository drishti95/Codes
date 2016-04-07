#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int t,n,k,*ar,i,c,r,x;
 cin>>t;
 while(t--)
 {
 cin>>n>>k;
 ar=new long long int[n+1];
 for(i=0;i<n;i++)
 {
 cin>>ar[i];
 }
 c=0;
 r=0;

 for(i=0;i<n;i++)
 {

 if(r==0)
 {
 c+=ar[i]/k;
 x=ar[i]%k;
 if(x)
 {
 c++;
 r=k-x;
 }
 if(r!=0)
 r--;
 }
 else if(r<=ar[i])
 {
   ar[i]=ar[i] - r;
   r=0;
   i--;
 }
 else
 {
 r=r-ar[i];
 if(r)
 r--;
 }
 }
 cout<<c<<endl;
 }

return 0;
}
