#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int process(long long int r, long long int c,long long int m,long long int k,long long int j)
{
  int flag = 0;
  if(r*c == m+k+j )
  {
      if((m%r==0 && k%r==0 && j%r==0) || (m%c==0 && k%c==0 && j%c==0))
        flag = 1;
      else if(m%r == 0 && k%(c-m/r)==0 && j%(c-m/r)==0)
      {
         flag = 1;
      }
      else if(k%r == 0 && m%(c-k/r)==0 && j%(c-k/r)==0)
      {
        flag = 1;
      }
      else if(j%r == 0 && k%(c-j/r)==0 && m%(c-j/r)==0)
      {
        flag = 1;
      }
      else if(m%c == 0 && k%(r-m/c)==0 && j%(r-m/c)==0)
      {
        flag = 1;
      }
      else if(k%c == 0 && m%(r-k/c)==0 && j%(r-k/c)==0)
      {
        flag = 1;
      }
      else if(j%c == 0 && k%(r-j/c)==0 && m%(r-j/c)==0)
      {
        flag = 1;
      }
  }
  if(flag==1)
    return 1;
  return 0;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int r,c,m,k,j;
        cin>>r>>c>>m>>k>>j;
        if(process(r,c,m,k,j))
          cout<<"Yes"<<endl;
        else
          cout<<"No"<<endl;
    }
}
