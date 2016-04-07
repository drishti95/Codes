#include<iostream>
#include<math.h>

using namespace std;
int determinant(int[10][10],int);
void read(int[10][10],int,int);
void print(int[10][10],int,int);

int main(void)
{
 int matrixA[10][10];
 int matrixB[10][10];
 int matrixC[10][10];
 int result,l,m,z,n;
 l1:
cout<<"Enter the size of the first matrix:"<<endl;
cin>>l>>m;
read(matrixA,l,m);
cout<<"Enter the dimension of the second matrix:"<<endl;
cin>>z>>n;
read(matrixB,z,n);

 if(l==m)
    cout<<"The determinant of first matrix is:"<<determinant(matrixA,l)<<endl;
 else
    cout<<"Determinant does not exists! Please enter a square matrix."<<endl;

 if(z==n)
    cout<<"The determinant of the second matrix is:"<<determinant(matrixB,z)<<endl;
 else
    cout<<"Determinant does not exists! Please enter a square matrix."<<endl;

cout<<"The product of matrixA and matrixB is:"<<endl;

if(m!=z)
{
    cout<<"Multiplication not possible!\nColumn of 1st matrix isn't equal to Row of 2nd matrix"<<endl;
	goto l1;
}
else
for(int i=0;i<l;i++)
{
    for(int j=0;j<n;j++)
    {
        matrixC[i][j]=0;
        for(int k=0;k<m;k++)
        {
            matrixC[i][j]=matrixC[i][j]+(matrixA[i][k] * matrixB[k][j]);
        }
    }
}

print(matrixC,l,n);
if(l==n)
    cout<<"The determinant of the above matrix is:"<<determinant(matrixC,l)<<endl;
 else
    cout<<"Determinant not possible!"<<endl;
 return 0;
}


void read(int b[10][10],int m,int n)
{
 cout<<"Enter "<<m*n<<" elements of matrix (row-wise):"<<endl;
 for(int i=0;i<m;i++)
  for(int j=0;j<n;j++)
	cin>>b[i][j];
}


void print(int b[10][10],int m,int n)
{
  for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
	cout<<b[i][j]<<" ";
  cout<<endl;
 }
}

int determinant(int b[10][10],int m)
{
 int i,j,sum = 0,c[10][10];
 if(m==2)
  {
	sum = b[0][0]*b[1][1] - b[0][1]*b[1][0];
	return sum;
  }
 for(int p=0;p<m;p++)
 {
  int h = 0,k = 0;
  for(i=1;i<m;i++)
  {
	for( j=0;j<m;j++)
	{
	 if(j==p)
	  continue;
	 c[h][k] = b[i][j];
	 k++;
	 if(k == m-1)
	  {
		 h++;
		 k = 0;
	  }

	}
  }
  sum = sum + b[0][p]*pow(-1,p)*determinant(c,m-1);
 }
 return sum;
}
