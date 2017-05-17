#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,f;
cin>>n;
while(n!=0)
{
f=0;
int ar[n],x[n];
for(i=0;i<n;i++)
{
cin>>ar[i];
x[ar[i]-1]=i+1;
}
for(i=0;i<n;i++)
{
if(x[i]!=ar[i])
{
    f=1;break;
}
}
if(f==1)
cout<<"not ambiguous"<<endl;
else
cout<<"ambiguous"<<endl;
cin>>n;
}

return 0;
}
