#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,sum;
cin>>t;
while(t--)
{
cin>>n;
sum=1;
while(n>1)
{
sum*=n;
n--;

}

cout<<sum<<endl;

}
return 0;
}
