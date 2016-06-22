#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,r,a,b,x,y,p,q,c;
cin>>t;
while(t--)
{
cin>>r;
c=0;
cin>>a>>b;
cin>>x>>y;
cin>>p>>q;
if((sqrt((p-x)*(p-x)+(q-y)*(q-y))<=r))
c++;
if(sqrt((p-a)*(p-a)+(q-b)*(q-b))<=r)
c++;
if(sqrt((a-x)*(a-x)+(b-y)*(b-y))<=r)
c++;
if(c>=2)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;


}
return 0;
}
