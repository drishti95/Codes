#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<string>s;
        string str;
        for(int i=0;i<4;i++)
        {
            cin>>str;
            s.insert(str);
        }
        for(int i=0;i<4;i++)
        {
            cin>>str;
            s.insert(str);
        }
        if(s.size()<=6)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;
    }
    return 0;
}
