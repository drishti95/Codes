#include<bits/stdc++.h>
using namespace std;
class matrix
{
    public:
    int row;
    int col;
    int mat[100][100];
    /*matrix(int r=0,int c=0)
    {
        row=r;
        col=c;
    }*/
    friend istream & operator >>(istream &in,matrix &m)
    {
        cout<<"Enter the no. of rows and columns:";
        in>>m.row>>m.col;
        int i,j;
        cout<<"Enter the matrix elements row-wise";
        for(i=0;i<m.row;i++)
        {
            for(j=0;j<m.col;j++)
                in>>m.mat[i][j];
            cout<<endl;
        }
        return in;
    }
    friend ostream & operator <<(ostream &out,matrix &m)
    {
        cout<<"The matrix is:";
        int i,j;
        for(i=0;i<m.row;i++)
        {
            for(j=0;j<m.col;j++)
                out<<m.mat[i][j];
            cout<<endl;
        }
        return out;
    }

    matrix operator+(matrix m2)
    {
            matrix m3;
            int i,j;
            m3.row=m2.row;
            m3.col=m2.col;
            //cout<<m3.row<<m3.col;
            for(i=0;i<m3.row;i++)
            {
                for(j=0;j<m3.col;j++)
                {
                    m3.mat[i][j]=mat[i][j]+m2.mat[i][j];
                }
            }

            return m3;
    }
};

int main()
{
    matrix m1,m2,m3;
    cin>>m1;
    cin>>m2;
    cout<<m1<<m2;
    m3=m1+m2;
    cout<<m3;
    return 0;
}
