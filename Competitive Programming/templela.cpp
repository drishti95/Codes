#include <iostream>
using namespace std;
int main()
{
  int  T,l,x,i,c,p;
  int h[101];
  cin>>T;

  while(T--)
  {
  cin>>l;
  for(i=0;i<l;i++)
  {
  cin>>h[i];
  }
  if(l%2==0 || h[0]!=1 || h[l-1]!=1)
  cout<<"no"<<endl;
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
  if(x==1)
  cout<<"no"<<endl;
  else
  cout<<"yes"<<endl;
  }

  }
  return 0;
}

