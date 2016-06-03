#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,a,b,i,*ar,x;
cin>>n;
string s,p;
while(n--)
{

   cin>>a;
   cin>>s;
   cin>>p;
   ar=new long long int[a+1];
   for(i=0;i<=a;i++)
   {
    cin>>ar[i];
   }
    b=0;
   for(i=0;i<a;i++)
   {
    if(s[i]==p[i])
    b++;

   }
    if(b==a)
   cout<<ar[b]<<endl;
   else
   {
   x=ar[0];
   for(i=0;i<=b;i++)
   {
        if(ar[i]>x)
        x=ar[i];
   }
   cout<<x<<endl;
   }
}

return 0;
}


