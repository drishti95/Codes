#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i;
string p;
cin>>t;
while(t--)
{
cin>>n>>p;
int x[n];
for(i=0;i<n;i++)
cin>>x[i];
if(n==1 && x[0]%2==0 && p=="Dee")
cout<<"Dee"<<endl;
else
cout<<"Dum"<<endl;

}
return 0;
}
