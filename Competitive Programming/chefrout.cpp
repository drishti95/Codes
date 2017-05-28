#include <bits/stdc++.h>
using namespace std;
int main()
{
   int  T,i,e,p;
  char s[100001];
  cin>>T;

  while(T--)
  {
  cin>>s;e=0;p=0;
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]=='C' && e==0 && p==0)
    continue;
    else if(s[i]=='E' && p==0)
    {
    e++;
    continue;
    }
    else if(s[i]=='S')
    {
    p++;
    continue;
    }
    else
    break;
  }
  if(i==strlen(s))
  cout<<"yes"<<endl;
  else
  cout<<"no"<<endl;
  }
  return 0;
}




