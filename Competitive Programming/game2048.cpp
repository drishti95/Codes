#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
long long int t,n,c,i;
cin>>t;
while(t--)
{
cin>>n;
c=0;
for(i=n;i>1;)
{
c+=i/2;
i-=i/2;
}
cout<<c<<endl;
}


return 0;
}
