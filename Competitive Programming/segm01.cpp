#include <iostream>
using namespace std;
int main()
{
  int N, T,i,flag=0,p;
  string S;
  cin>>T;
  while(T--)
  {
  cin>>S;
  p=0;flag=0;
  N=S.size();
  for(i=0;i<N;i++)
  {
    if(S[i]=='1' && p==0)
    {
        flag=1;
    }
    else if(S[i]=='1'&& p==1)
    {
        flag=0; break;
    }
    else if(S[i]=='0' && flag==1)
    {
        p=1;
    }
  }
    if(flag)
    cout<<"YES"<<endl;
    else
   cout<<"NO"<<"\n";
  }
  return 0;
}

