#include<iostream>
#include<iomanip>
using namespace std;

class complex
{
    public:
	  float real,imag;
	  complex(float x=3.0,float y=7.0)
	  {
        real=x;
        imag=y;
	  }
	  ~complex(){}
	  friend void operator>>(istream &x, complex &c)
	  {
	  	x>>c.real>>c.imag;
      }
	  friend void operator<<(ostream &x, complex &c)
	  {
	  	x<<c.real<<"+i"<<c.imag;
      }
      void operator=(complex &c)
	  {
	  	this->real=c.real;
	  	this->imag=c.imag;
      }

};

class matrix
{
	public:
	  int row,col;
	  int mat[10][10];
	  matrix(int x = 2, int y = 2)
	  {
	  	col = y;
	  	row = x;
      }
	  ~matrix(){}
	  friend void operator>>(istream &x, matrix &m)
	  {
	  	for(int i=0;i<m.row;i++)
        {
            for(int j=0;j<m.col;j++)
                {
                    x>>m.mat[i][j];
                }
        }

	  }
	  friend void operator<<(ostream &x, matrix &m)
	  {
	  	for(int i=0;i<m.row;i++)
        {
            for(int j=0;j<m.col;j++)
                {
                    x<<m.mat[i][j];
                    x<<" ";
                }
                x<<endl;
        }

	  }
	  void operator=(matrix &m)
	  {
	  	for(int i=0;i<this->row;i++)
        {
            for(int j=0;j<this->col;j++)
                {
                   this->mat[i][j]=m.mat[i][j];

                }

        }
      }

};
class array
{
	public:
	    int n;
	   int arr[10];
	array(int x = 5)
    {
        n=x;
    }
	  ~array(){}
	   friend void operator>>(istream &x, array &a)
	  {

	  	       for(int j=0;j<a.n;j++)
                {
                    cout<<"Enter element\n";
                    x>>a.arr[j];

                }
	  }
	  friend void operator<<(ostream &x, array &a)
	  {

	  	       for(int j=0;j<a.n;j++)
                {
                    x<<a.arr[j];
                    x<<"  ";
                }
	  }
	  void operator=(array &a)
	  {
	  	for(int i=0;i<this->n;i++)
        {
            this->arr[i]=a.arr[i];
        }
      }

};
class polynomial
{
	public:
	    int n;
	   int arr[10];
	polynomial(int x = 5)
    {
        n=x;
    }
	  ~polynomial(){}
	  friend void operator>>(istream &x, polynomial &p)
	  {
	      for(int j=0;j<=p.n;j++)
         {
            cout<<"Enter coefficient for the power"<<j<<endl;
            cin>>p.arr[j];
         }
	  }
	  friend void operator<<(ostream &x, polynomial &p)
	  {

	  	       for(int j=p.n;j>=0;j--)
                {
                    if(p.arr[j]!=0)
                    {
                    x<<p.arr[j];
                    x<<"x^";
                    x<<j;
                    if(j!=0)
                    x<<"+";
                    }

                }
	  }
	  void operator=(polynomial &p)
	  {
	  	for(int i=0;i<=this->n;i++)
        {
            this->arr[i]=p.arr[i];
        }
      }

};
int main(void)
{
	complex c1,c2;
	cout<<"Enter complex number elements:\n";
	cin>>c1;
	c2=c1;
	matrix m1,m2;
	cout<<"Enter the matrix elements:\n";
	cin>>m1;
	m2=m1;
	array a1,a2;
	cout<<"Enter array elements\n";
	cin>>a1;
	a2=a1;
	polynomial p1,p2;
	cout<<"Enter polynomial coefficients: \n";
	cin>>p1;
	p2=p1;
	cout<<"Complex Number:\n"<<c1;
	cout<<endl<<endl;
	cout<<"Matrix:\n"<<m1;
	cout<<endl;
	cout<<"Array:\n"<<a1;
	cout<<endl<<endl;
	cout<<"Polynomial:\n"<<p1;
	cout<<endl<<endl;
	cout<<"Complex Number:\n"<<c2;
	cout<<endl<<endl;
	cout<<"Matrix:\n"<<m2;
	cout<<endl;
    cout<<"Array:\n"<<a2;
	cout<<endl<<endl;
	cout<<"Polynomial:\n"<<p2;
}
