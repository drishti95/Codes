#include<iostream>
using namespace std;

class complex
{
	
	public:
	  float real,imag;
	  complex(float x = 1.0, float y = 1.0)
	  {
	  	imag = y;
	  	real = x;
	  }
	  ~complex(){}
	  complex operator+(const complex &a)
	  {
	  	complex s;
	  	s.imag = a.imag + imag;
	  	s.real = a.real +real;
	  	return (s);
	  }
	  complex operator+(int x)
	  {
	  	complex s;
	  	s.imag = imag;
	  	s.real = real + x;
	  	return (s);
	  }
	  friend complex operator+(int x, complex &c)
	  {
	  	complex t;
	  	t.imag = c.imag;
	  	t.real = c.real + x;
	  	return (t);
	  }
};

int main(void)
{
	complex c3,c1,c2(2,4);
	c1 = c1 + c2;
	cout<<"Real : "<<c1.real<<"  "<<"Imag : "<<c1.imag<<endl;
	c2 = c1 + 4;
	cout<<"Real : "<<c2.real<<" "<<"Imag : "<<c2.imag<<endl;
	c3 = 5 + c2;
	cout<<"Real : "<<c3.real<<" "<<"Imag : "<<c3.imag<<endl;
	return 0;
}
