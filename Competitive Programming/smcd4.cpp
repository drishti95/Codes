#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=100;
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'||s[i]=='h')
            sum=sum+a;
        else
            sum-=a;
        a+=100;
    }
    cout<<sum;
    return 0;
}
