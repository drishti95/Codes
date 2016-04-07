#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,*a,i,j,f;
cin>>t;
while(t--)
{
cin>>n;
a=new int [n];
for(i=0;i<n;i++)
cin>>a[i];
for(j=1000;j>=2;j--)
  {
          f=0;
       for(i=0;i<n;i++)
       {
            if(a[i]%j!=0)
            {
            f=1;break;}
       }
    if(f==0)
    for(i=0;i<n;i++)
       a[i]/=j;

}

for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}

return 0;
}
