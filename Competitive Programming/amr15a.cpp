#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,*ar,s=0,i;
cin>>n;
ar=new long long int[n];
for(i=0;i<n;i++)
cin>>ar[i];
for(i=0;i<n;i++)
{
if(ar[i]%2)
s--;
else
s++;
}
if(s>0)
cout<<"READY FOR BATTLE"<<endl;
else
cout<<"NOT READY"<<endl;
return 0;
}
