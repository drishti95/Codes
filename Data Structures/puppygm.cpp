#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int t,a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
if(a%2==0 || b%2==0)
cout<<"Tuzik"<<endl;
else
cout<<"Vanka"<<endl;
}
return 0;
}
