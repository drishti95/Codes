#include<bits/stdc++.h>
using namespace std;
long long int pw(long long int a, long long int b){
  long long int r,mod=1000000007;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%mod;
  if(b%2) r = (r*a)%mod;
  return r;
}
int main()
{
  long long int t,n,*ar,s1,s2,i,mod=1000000007;
  cin>>t;
  while(t--)
  {
  cin>>n;
  ar=new long long int[n];
  for(i=0;i<n;i++)
  cin>>ar[i];
  sort(ar,ar+n);
  s1=0;s2=0;
  for(i=0;i<n;i++)
  {
   s1=s1%mod+((ar[i]%mod)*(pw(2,n-i-1)-1)%mod)%mod;
   s2=s2%mod+((ar[i]%mod)*(pw(2,i)-1)%mod)%mod;
  }
  cout<<(s2-s1+mod)%mod<<endl;
  }

return 0;
}
