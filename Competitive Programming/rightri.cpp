#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   long long int t,c=0;
    cin>>t;
    int x1,x2,x3,y1,y2,y3;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>endl;
        if(((x1-x2)*(x2-x3)/(y1-y2)*(y2-y3))==-1||((x1-x2)*(x1-x3)/(y1-y2)*(y1-y3))==-1||((x1-x3)*(x2-x3)/(y1-y3)*(y2-y3))==1)
        c++;
    }
    cout<<c;

    return 0;
}
