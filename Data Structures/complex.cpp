#include<bits/stdc++.h>
using namespace std;
class comp
{
    float real;
    float imag;
    public:
        comp(float r=0.0,float i=0.0)
        {
            real=r;
            imag=i;
        }
        void argument();
        void modulus();
        comp operator +(comp);
        friend ostream & operator <<(ostream &out,comp c)
        {
            out<<c.real<<"+"<<c.imag<<"i"<<endl;
            return out;
        }
        friend istream & operator >>(istream &in,comp &c)
        {
            cout<<"Enter the real part:";
            in>>c.real;
            cout<<"Enter the imaginary part:";
            in>>c.imag;
            return in;
        }

};
void comp::argument()
{
    float x;
    x=(imag/real);
    cout<<"\nThe tangent of the argument:"<<x<<endl;
}
void comp::modulus()
{
    float z;
    z=sqrt((real*real)+(imag*imag));
    cout<<"\nThe modulus is:"<<z<<endl;
}
comp comp::operator+(comp c2)
{
    comp c3;
    c3.real=real+c2.real;
    c3.imag=imag+c2.imag;
    return c3;
}
int main()
{
    comp c1,c2,c3;
    cin>>c1>>c2;
    //cin>>c2;
    cout<<c1<<c2;
    //cout<<c2;
    c3=c1+c2;
    cout<<c3;
    return 0;
}
