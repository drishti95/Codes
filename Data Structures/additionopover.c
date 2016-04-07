#include<iostream>
#include<iomanip>
using namespace std;

class matrix
{

	public:

	  int row,col;
	  int mat[10][10];
	  matrix(int x = 1.0, int y = 1.0)
	  {
	  	col = y;
	  	row = x;

	   for(i=0;i<row;i++)
            {
              for(j=0;j<col;j++)
                {
                    cout<<"Enter element"<<endl;
                    cin>>mat[i][j];
                }
             }
	  }
	  ~matrix(){}
	  matrix operator+(const matrix &a)
	  {
	  	matrix s;
	  	 for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    s.mat[i][j]+=a.mat[i][j];
                }
        }
	  	return (s);
	  }
	  matrix operator+(int x)
	  {
	  	matrix s;
	  	for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    s.mat[i][j]+=x;
                }
        }
	  	return (s);
	  }
	  friend matrix operator+(int x, matrix &c)
	  {
	  	matrix t;
	  	for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    t.mat[i][j]+=x+c.mat[i][j];
                }
        }
	  	return (t);
	  }
};

int main(void)
{
	matrix c3,c1,c2(2,4);
	c1 = c1 + c2;
	cout<<"row : "<<c1.row<<"  "<<"col : "<<c1.col<<endl;
	c2 = c1 + 4;
	cout<<"row : "<<c2.row<<" "<<"col : "<<c2.col<<endl;
	c3 = 5 + c2;
	cout<<"row : "<<c3.row<<" "<<"col : "<<c3.col<<endl;
	return 0;
}

