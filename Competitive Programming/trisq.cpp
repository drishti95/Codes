#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,a,b;
cin>>t;
while(t--)
{
cin>>a;
b=0;
while(a>0)
{
b+=(a-2)/2;
a-=2;
}
cout<<b<<endl;
}


return 0;
}

