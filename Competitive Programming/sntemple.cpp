#include <iostream>
using namespace std;
int main()
{
  long long int  T,l,x,i,c,p;
  long long int h[100001];
  cin>>T;

  while(T--)
  {
  cin>>l;
  for(i=0;i<l;i++)
  {
  cin>>h[i];
  }
  if(l%2==0 || h[0]!=1 || h[l-1]!=1)
  cout<<"no"<<en
  else
  {
  c=2;p=1;x=0;
  for(i=1;i<l-1;i++)
  {
   if(h[i]!=c)
   {
    x=1;break;
   }
   if(i==l/2)
   p=0;
   if(p==1)
   c++;
   else
   c--;
  }

  }

  }
  return 0;
}


