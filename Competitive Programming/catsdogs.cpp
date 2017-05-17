#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,c,d,l;
cin>>t;
while(t--)
{
cin>>c>>d>>l;
if(c<2*d)
{
if(l%4==0 && l<=4*(c+d) && l>=4*d)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}
else
{

if(l%4==0 && l<=4*(c+d) && l>=4*(c-d))
cout<<"yes"<<endl;
else
cout<<"no"<<endl;

}

}
return 0;

}
