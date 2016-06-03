#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a;
float b;
cin>>t;
while(t--)
{
scanf("%d%f",&a,&b);
if(a>1000)
printf("%0.6f\n",0.9*a*b);
else
printf("%0.6f\n",a*b);
}
return 0;
}
