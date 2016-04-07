#include<bits/stdc++.h>
using namespace std;
class poly
{
    int n;
    int arr[100];
    public:
    poly()
    {
        for(int i=0;i<100;i++)
            arr[i]=0;
    }
    friend istream & operator >>(istream &in,poly &p)
    {
        cout<<"Enter the highest power of x:";
        in>>p.n;
        for(int i=p.n;i>=0;i--)
        {
            cout<<"Enter the co-efficient of x"<<i<<":";
            in>>p.arr[i];
        }
        return in;
    }
    friend ostream & operator <<(ostream &out,poly p)
    {
        int flag=0;
        for(int i=p.n;i>=0;i--)
        {
            if(p.arr[i]==0)
                continue;
            if(flag!=0)
                cout<<"+";
            flag++;
            out<<p.arr[i]<<"x"<<i;
        }
        out<<endl;
        return out;
    }
    poly operator+(poly p2)
    {
        poly p3;
        if(n>p2.n)
            p3.n=n;
        else
            p3.n=p2.n;
        for(int i=0;i<=p3.n;i++)
            p3.arr[i]=arr[i]+p2.arr[i];
        return p3;
    }
};
int main()
{
    poly p1,p2,p3;
    cin>>p1;
    cin>>p2;
    cout<<p1;
    cout<<p2;
    p3=p1+p2;
    cout<<p3;
    return 0;
}
