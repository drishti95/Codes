#include<iostream>
#include<iomanip>
using namespace std;
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int main()
{
unsigned long long int t,a,b,x,p;
cin>>t;
while(t--)
{
cin>>a>>b;
x=gcd(a,b);

while(1)
{

b=b/x;
x=gcd(a,b);
if(x==1||x==b)
{
break;
}

}

if(b==x)
cout<<"Yes"<<endl;
else if(x==1)
cout<<"No"<<endl;
}

return 0;
}
