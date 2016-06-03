#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,a,k,p,i;
cin>>a>>n>>k;
long long int ar[k];
for(i=0;i<k;i++)
ar[i]=0;
p=0;
while(a>0 && p<k)
{
    ar[p++]=a%(n+1);
    a=a/(n+1);

}
for(i=0;i<k;i++)
cout<<ar[i]<<" ";
return 0;
}
