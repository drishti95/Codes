#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
int k,n,i=0,x,f;
cin>>k>>n;
string fav[k],b;
while(i<k)
cin>>fav[i++];
i=0;
while(n--)
{
cin>>b;
x=b.length();
if(x>46)
cout<<"Good"<<endl;
else
{
int p=0;
while(p<k)
{
f=b.find(fav[p]);
if(f>=0 && f<x)
{
cout<<"Good"<<endl;
break;
}
p++;
}
if(p>=k)
cout<<"Bad"<<endl;
}
}
return 0;
}
