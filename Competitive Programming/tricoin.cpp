#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,c;
cin>>t;
while(t--)
{
cin>>n;
c=1;
while(c*(c+1)/2<=n)
c++;

cout<<c-1<<endl;
}

return 0;
}


