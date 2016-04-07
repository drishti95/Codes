#include <bits/stdc++.h>
using namespace std;

void findAllSubstrings(const char *s){
    int x=0;
    while(*(s+x)){
        for(int y=0; y<=x; y++)
            ;
        cout<<'\n';
        x++;
    }
    if(*(s+1))
        findAllSubstrings(s+1);
    else
        return;
}

int main()
{
long long int t,n,q,k;
string s;
cin>>t;
while(t--)
{
cin>>n>>q;
cin>>s;
while(q--)
{
cin>>k;



}

}

return 0;
}
