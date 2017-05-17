#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(int se[], int n, int sum)
{
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   if (se[n-1] > sum)
     return isSubsetSum(se, n-1, sum);
   return isSubsetSum(se, n-1, sum) ||
                        isSubsetSum(se, n-1, sum-se[n-1]);
}
int main()
{
int t,n,i,*se,sum;
cin>>t;
while(t--)
{
cin>>n>>sum;
se=new int[n];
for(i=0;i<n;i++)
cin>>se[i];
 if (isSubsetSum(se, n, sum) == true)
     cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
    }
 return 0;


}

