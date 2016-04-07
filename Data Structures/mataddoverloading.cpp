#include<iostream>
#include<iomanip>
using namespace std;

class matrix
{
	public:
	  int row,col;
	  int mat[10][10];
	  matrix()
	  {
	      col=2;
	      row=2;
      }
	   matrix(int x,int y)
	  {
	  	col = y;
	  	row = x;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
                {
                    cout<<"Enter"<<i<<j<<"th element"<<endl;
                    cin>>mat[i][j];
                }
        }
	  }
	  ~matrix(){}
	  matrix operator+(const matrix &a)
	  {
	     matrix s;
	  	 for(int i=0;i<a.row;i++)
        {
            for(int j=0;j<a.col;j++)
                {
                    s.mat[i][j]=a.mat[i][j]+this->mat[i][j];
                }
        }
	  	return (s);
	  }
	  matrix operator+(int x)
	  {
	  	matrix s;
	  	for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
                {
                    s.mat[i][j]=x+this->mat[i][j];
                }
        }
	  	return (s);
	  }
	  friend matrix operator+(int x, matrix &c)
	  {
	  	matrix t;
	  	for(int i=0;i<c.row;i++)
        {
            for(int j=0;j<c.col;j++)
                {
                    t.mat[i][j]=x+c.mat[i][j];
                }
        }
	  	return (t);
	  }
};

int main(void)
{
	matrix c3(2,2),c1(2,2),c2(2,2);
	c1 = c1 + c2;
	for(int i=0;i<c1.row;i++)
    {
        for(int j=0;j<c1.col;j++)
            cout<<c1.mat[i][j];
        cout<<endl;
    }
cout<<endl;
	c2 = c1 + 4;
	for(int i=0;i<c2.row;i++)
    {
        for(int j=0;j<c2.col;j++)
            cout<<c2.mat[i][j];
        cout<<endl;
    }
	c3 = 5 + c2;
	cout<<endl;
for(int i=0;i<c3.row;i++)
    {
        for(int j=0;j<c3.col;j++)
            cout<<c3.mat[i][j];
        cout<<endl;
    }
	return 0;
}

