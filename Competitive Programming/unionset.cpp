#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,a,i,n,p,k,c,j;
	cin>>t;
	while(t--)
	{
        cin>>n>>k;
        long long int ar[n][k];
        memset(ar, 0, sizeof(ar[0][0]) * n * k);
		for(i=0;i<n;i++)
		{
		  cin>>p;
		  for(j=0;j<p;j++)
		  {
		    cin>>a;
		    ar[i][a-1]=1;
		  }
        }


        c=0;
        for(i=0;i<n;i++)
        {
          for(p=i+1;p<n;p++)
          {
            for(j=0;j<k;j++)
            {

              if(ar[i][j]==1 || ar[p][j]==1)
              continue;
              else
                break;
            }
            if(j==k)
            c++;
          }
}
        cout<<c<<endl;

    }

	return 0;
}


