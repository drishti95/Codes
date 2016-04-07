#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int n,c=0,i;
    cin>>n;
    string s;
   cin>>s;
   for(i=0;i<n;i++)
   {
       if(s[i]=='.')
        c++;
   }
    cout<<c;
    return 0;

}
