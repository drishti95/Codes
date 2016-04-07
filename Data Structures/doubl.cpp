#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,i,f;
cin>>t;
while(t--)
{
cin>>n;f=0;
for(i=2;i<(n);i++)
{
if(n%i==0)
{
f++;
break;
}

}
if(f)
cout<<"Sorry"<<endl;
else
cout<<"LUCKY NUMBER"<<endl;

}


return 0;
}
