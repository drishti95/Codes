#include<bits/stdc++.h>
using namespace std;
class determinant
{
    public:
    int mat[100][100],n;
    //double d;
    determinant()
    {
        cout<<"Enter the order of the matrix:";
        cin>>n;
        cout<<"Enter the elements"<<endl;
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>mat[i][j];
        }
    }
    void display();
    double det(int n,int mat[100][100]);

};

double determinant::det(int n,int mat[100][100])
{
    int c,i,j,submat[100][100],subi,subj;
    double d;
    if(n==2)
        return (mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0]);
    for(c=0;c<n;c++)
    {
        subi=0;
        for(i=1;i<n;i++)
        {
            subj=0;
            for(j=0;j<n;j++)
            {
                if(j==c)
                    continue;
                submat[subi][subj]=mat[i][j];
                subj++;
            }
            subi++;
        }
        d=d+(pow(-1,c)*mat[0][c]*det(n-1,submat));
    }
    //cout<<d;
    return d;
}
void determinant::display()
{
    double d=det(n,mat);
    cout<<"The determinant:"<<d<<endl;
}
int main()
{
    determinant d;
    d.display();
    return 0;
}
