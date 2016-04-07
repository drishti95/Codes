#include<bits/stdc++.h>
using namespace std;
class number
{
    int arr[100];
    int n;
    public:
    number()
    {
        for(int i=0;i<100;i++)
            arr[i]=0;
    }
    friend istream & operator>>(istream &in,number &num)
    {
        cout<<"Enter the number:";
        char str[100];
        in>>str;
        int numi;
        num.n=strlen(str);
        numi=0;
        for(int i=num.n-1;i>=0;i--)
        {
            num.arr[numi]=str[i]-'0';
            numi++;
        }
    }
    friend ostream & operator<<(ostream &out,number &num)
    {
        for(int i=num.n-1;i>=0;i--)
            out<<num.arr[i];
        out<<endl;
        return out;
    }
    number operator+(number n2)
    {
        number n3;
        int maxx=(n>n2.n)?n:n2.n;
        int n3_i=0,sum=0,carry=0;
        for(int i=0;i<maxx;i++)
        {
            sum=arr[i]+n2.arr[i]+carry;
            //cout<<arr[i]<<n2.arr[i]<<carry<<"*"<<endl;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
                carry=0;
            n3.arr[n3_i]=sum;
            //cout<<sum<<"&"<<carry<<"$"<<endl;
            n3_i++;
        }
        if(carry>0)
        {
            while(carry!=0)
            {
                n3.arr[n3_i]=carry%10;
                carry=carry/10;
                n3_i++;
            }
        }
        n3.n=n3_i;
        return n3;
    }
};
int main()
{
    number n1,n2,n3;
    cin>>n1;
    cin>>n2;
    cout<<n1;
    cout<<n2;
    n3=n1+n2;
    cout<<n3;
    return 0;

}
