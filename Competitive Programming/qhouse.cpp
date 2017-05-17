#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,a;
string s;


j=1;
while(1)
{
cout<<"? "<<j<<" "<<0<<endl;
fflush(stdout);
cin>>s;
if(s=="NO")
break;
else
j++;
}
i=j-1;
while(1)
{
cout<<"? "<<0<<" "<<i<<endl;
fflush(stdout);
cin>>s;
if(s=="NO")
break;
else
i++;
}
i-=1;
j-=1;
j*=2;
a=j*j;
i-=j;
k=1;
while(1)
{
cout<<"? "<<k<<" "<<j<<endl;
fflush(stdout);
cin>>s;
if(s=="NO")
break;
else
k++;
}
k-=1;
a+=k*i;

cout<<"! "<<a<<endl;


return 0;
}

