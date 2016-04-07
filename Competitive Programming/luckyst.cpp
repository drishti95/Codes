#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,*ar,i,c,x,p,y;
cin>>n;
ar=new long long int[n+1];
for(i=0;i<n;i++)
cin>>ar[i];
for(i=0;i<n;i++)
{
c=0;x=0;
p=ar[i];
while(p%10==0)
{
c++;
p/=10;
}
x=c;p=ar[i];
do
{
c=x;
p=p*4;
x=0;
y=p;
while(y%10==0)
{
x++;
y/=10;
}
}while(x>c);
p=p/4;
cout<<(p)<<endl;

}






return 0;
}
