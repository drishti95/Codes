#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
float sum;
cin>>t;
while(t--)
{
cin>>n;
sum=n;
if(n<1500)
sum*=2;
else
{
sum*=1.98;
sum+=500;
}
cout<<sum<<endl;

}
return 0;
}
