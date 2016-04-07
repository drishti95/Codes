#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t;
cin>>t;
string top,bottom,fr,rear,le,ri;
while(t--)
{
cin>>fr;
cin>>rear;
cin>>le;
cin>>ri;
cin>>top;
cin>>bottom;
if((fr==le && le==bottom) || (rear==ri && ri==bottom) || (fr==le && le==top) || (rear==ri && ri==top) || (rear==le && le==top) || (rear==le && le==bottom) || (fr==ri && ri==top) || (fr==ri && ri==bottom))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

return 0;
}
