#include <iostream>
using namespace std;
int main()
{
  int  T,l,x,i,c;

  cin>>T;
string s;
  while(T--)
  {
  cin>>l;
  cin>>s;
  c=0;x=0;
  for(i=0;i<l;i++)
  {
  if(s[i]=='.')
  continue;
  else if(s[i]=='H' && c==0)
  {
    c=1;
  }
  else if(s[i]=='T' && c==1)
  {
    c=0;
  }
  else
  {
     x=1;break;
  }
  }
  if(x==1 || c==1)
  cout<<"Invalid"<<endl;
  else
  cout<<"Valid"<<endl;

  }
  return 0;
}
