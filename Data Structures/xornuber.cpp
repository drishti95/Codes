#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,a,x,p;
cin>>t;
while(t--)
{
cin>>a;
if(a==1)
cout<<"2"<<endl;
else if((a & (a+1)) ==0)
{
x=log(a+1)/log(2);
p=pow(2,(x-1))-1;
cout<<p<<endl;
}
else
cout<<"-1"<<endl;
}
return 0;
}

