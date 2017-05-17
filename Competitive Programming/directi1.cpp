#include<bits/stdc++.h>
using namespace std;
long long int recur(long long int A[], long long int n, long long int mlp) {
  long long int total = 0, num = 1,i;
  for (i = 0; i < n; i++) {
    total += A[i];
    if (total > mlp) {
      total = A[i];
      num++;
    }
  }
  return num;
}
int main()
{
long long int t,n,m,*ar,ma,sum,mid,r,i,lo,hi,k;
cin>>t;
while(t--)
{
 cin>>n>>m;

 ar=new long long int[n];
 ma=0;
 sum=0;
 for(i=0;i<n;i++)
 {
 cin>>ar[i];
 if (ar[i] > ma)
 ma = ar[i];
 sum+=ar[i];
 }
 if(m==0)
 {
 cout<<"-1"<<endl;
 continue;
 }
 lo=ma;
 hi=sum;
 while (lo < hi) {
    mid = (lo + hi)/2;
    r = recur(ar, n, mid);
    if (r <= m)
      hi = mid;
    else
      lo = mid+1;
  }
cout<<lo<<endl;
}
return 0;
}
