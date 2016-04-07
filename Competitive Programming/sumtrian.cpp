#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,a[100][100],n,i,s=0,j,m;
    cin>>t>>endl;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
                cin>>a[i][j];
        }
        s=a[0][0];m=0;
        for(i=0;i<n;i++)
        {

            if(a[i+1][m]>a[i+1][m+1])
            s=s+a[i][m];
            else
            {
                s=a[i][m+1];
                m++;
            }
        }


    }
    return 0;
}
