#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,c,sum,mi,ma;
cin>>t;
while(t--)
{
cin>>a>>b>>c;
sum=a+b+c;
ma=a;mi=a;
if(b>ma)
ma=b;
if(c>ma)
ma=c;
if(c<mi)
mi=c;
if(b<mi)
mi=b;
sum-=mi;sum-=ma;
cout<<sum<<endl;

}
return 0;
}
