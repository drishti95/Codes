#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
long long int t,k,n;
double p;
cin>>t;
while(t--)
{
cin>>n>>k;
p=(double)(n-1)/(n*(n-k-1));
printf("%0.6f\n",p);
}

return 0;
}

