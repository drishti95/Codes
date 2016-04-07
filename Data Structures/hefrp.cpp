#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 long long int t,n,*ar,mi,su,i;
 cin>>t;
 while(t--)
 {
  cin>>n;
 ar=new long long int[n];
 for(i=0;i<n;i++)
 {
 cin>>ar[i];
 }
 mi=ar[0];su=0;
 for(i=0;i<n;i++)
 {
   if(ar[i]<mi)
   mi=ar[i];
   su+=ar[i];
  }
 if(mi<2)
 cout<<"-1"<<endl;
 else
 cout<<su-mi+2<<endl;
 }



return 0;

}
