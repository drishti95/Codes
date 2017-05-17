#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int res = 0;
        for(i=0;i<s.length();i++)
        {
            if(s[i] == '<' && s[i+1] == '>') res++;
        }
        cout << res << endl;
    }
    return 0;
}
