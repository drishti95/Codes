#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  T,l,i,c,k,q,p;
  long long int h[100001];
  cin>>T;
  while(T--)
  {
  cin>>l>>q;
  for(i=0;i<l;i++)
  {
  cin>>h[i];
  }
  stable_sort(h, h+l);
  while(q--)
  {
  cin>>k;
  c=0;p=0;
  for(i=l-1;i>=0;i--)
  {
    if(k-h[i]<=i-p)
    {
    c++;
    if(k-h[i]>0)
    p+=k-h[i];
    }
  }
  cout<<c<<endl;
  }
  }
  return 0;
}


