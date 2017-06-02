#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int r,t,u,v;
cin>>t;
while(t--)
{
cin>>u>>v;
r=(u+v)*(u+v+1)/2;
r+=u+1;

cout<<r<<endl;

}

}
