#include<iostream>
#define llu unsigned long long int
#define MOD 1000000000
using namespace std;
#define min(a,b) ({a < b ? a : b; })
llu  w[2001][2001];
llu  c[4001][2001];
void nCr(int n,int r)
{ int i,j;
  for(i=0;i<=n;i++)
  { for(j=0;j<=min(i,r);j++)
    { if(j==0||j==i)
      c[i][j]=1;
      else
        c[i][j]=(c[i-1][j-1]+c[i-1][j])%MOD;
    }
  }
}
int main()
{ int i,j,t,n,m;
  cin>>t;
  nCr(3999,1999);
  while(t--)
  { cin>>n>>m;
    for(i=0;i<=n;i++)
    { for(j=0;j<=m;j++)
      { if(j==0)
         w[i][j]=1;
        else if(i==0&&j!=0)
            w[i][j]=(w[i][j-1]%MOD + c[j+m-1][m-1]%MOD)%MOD;
        else
            w[i][j]=(w[i][j-1]%MOD+((w[i-1][j]%MOD)*(c[j+m-1][m-1]%MOD)%MOD))%MOD;
      }
    }
    for(i=0;i<=n;i++)
    { for(j=0;j<=m;j++)
     cout<<w[i][j]<<" ";
     cout<<endl;
     }
      cout<<w[n-1][m]<<endl;
  }
  return 0;
}
