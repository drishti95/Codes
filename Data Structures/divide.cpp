#include<bits/stdc++.h>
using namespace std;
int divide(int dividend,int divisor,int origdiv)
{
long long int quotient = 1,p=1;
    if(dividend<0)
    {
        p*=-1;
        dividend*=-1;
    }
    if(divisor<0)
    {
        p*=-1;
        divisor*=-1;
    }

    if (dividend == divisor)
    {

        return 1;
    }

    else if (dividend < divisor)
    {

        return 0;
    }

    while (divisor <= dividend)
    {
        divisor = divisor << 1;
        quotient = quotient << 1;
    }

    if (dividend < divisor)
    {
        divisor >>= 1;
        quotient >>= 1;
    }

    quotient = (quotient + divide(dividend - divisor, origdiv, origdiv));
    if(quotient>INT_MAX || quotient<INT_MIN)
    return INT_MAX;
    return (int)(quotient*p);

}
int main()
{
int a,b,q;
cin>>a>>b;
q=divide(a,b,b);

cout<<q<<endl;
return 0;
}
