#include <bits/stdc++.h>
using namespace std;
int main()
{  int t,n,m,i;
    cin>>t;
   while(t--)
    {
	cin>>n;
	int a[n];
	 for(i=0;i<n;i++)
	    cin>>a[i];

    	cin>>m;
    	int b[m];
    	for(i=0;i<m;i++)
	    cin>>b[i];
      int count=0;
	    for(i=0;i<n;i++)
	     {
	        if(a[i]==b[count])
	        {
	            count++;
	        }
	        if(count==m)
	        {
	            break;
	        }
             }
	if(count==m)
	    cout<<"Yes\n";

	else
	    cout<<"No\n";

    }
	return 0;
}
