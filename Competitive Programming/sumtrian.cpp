#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,a[100][100],n,i,j,ele;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                a[i][j]=0;

        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++){
                cin>>ele;
         a[i][j]=max(ele+a[i-1][j],ele+a[i-1][j-1]);}
        }
        ele=0;
		for(i=0;i<n;i++)
		{
			if(a[n][i]>ele)
				ele=a[n][i];
		}
		cout<<ele<<endl;


    }
    return 0;
}
