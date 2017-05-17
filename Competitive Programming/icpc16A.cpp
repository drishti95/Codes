#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x,y,a,b;
cin>>t;
while(t--)
{
cin>>x>>y>>a>>b;
if(x-a>=1 && y-b==0)
cout<<"left"<<endl;
else if(x-a==0 && y-b>=1)
cout<<"down"<<endl;
else if(x-a==0 && y-b<=-1)
cout<<"up"<<endl;
else if(x-a<=-1 && y-b==0)
cout<<"right"<<endl;
else
cout<<"sad"<<endl;
}

return 0;
}
