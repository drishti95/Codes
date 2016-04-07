#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int m,n,ar[201],i,c,d,s;
cin>>n>>m;
for(i=0;i<n;i++)
cin>>ar[i];
for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (ar[d] < ar[d+1]) /* For decreasing order use < */
      {
        s= ar[d];
        ar[d]   = ar[d+1];
        ar[d+1] = s;
      }
    }
  }

cout<<ar[m-1];
return 0;
}
