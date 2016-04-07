#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char s[51];
    while(t--)
    {
        cin>>s;
        int c=0;
        int k=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==' ')
            {
                c=0;
                k=k*10+c;
            }
            else
                c++;
            if(i==(strlen(s)-1))
                k=k*10+c;

        }
        cout<<k<<endl;
    }
    return 0;
}
