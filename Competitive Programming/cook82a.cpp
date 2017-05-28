#include <iostream>
using namespace std;
int main()
{
   int  T,r,b,m,e,x;
  string s;
  cin>>T;

  while(T--)
  {
  cin>>s>>x;
  if(s[0]=='B')
  b=x;
  else if(s[0]=='E')
  e=x;
  else if(s[0]=='M')
  m=x;
  else if(s[0]=='R')
  r=x;
  cin>>s>>x;
  if(s[0]=='B')
  b=x;
  else if(s[0]=='E')
  e=x;
  else if(s[0]=='M')
  m=x;
  else if(s[0]=='R')
  r=x;
cin>>s>>x;
  if(s[0]=='B')
  b=x;
  else if(s[0]=='E')
  e=x;
  else if(s[0]=='M')
  m=x;
  else if(s[0]=='R')
  r=x;
cin>>s>>x;
  if(s[0]=='B')
  b=x;
  else if(s[0]=='E')
  e=x;
  else if(s[0]=='M')
  m=x;
  else if(s[0]=='R')
  r=x;
if(r<m && b>e)
cout<<"Barcelona"<<endl;
else
cout<<"RealMadrid"<<endl;

  }
  return 0;
}



