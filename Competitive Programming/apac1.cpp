#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
 long long int t,n,i=1,f[26],k,j,c,ma;
 string x,an="";
    cin>>t;
    while(i<=t)
    {
        cin>>n;
        ma=0;
        an="";
        vector<string> s;
        for(j=0;j<=n;j++)
        {
            x="";
            getline(cin,x);
            s.push_back(x);
        }
        for(j=0;j<=n;j++)
        {
            for(k=0;k<26;k++)
            f[k]=0;
            x=s[j];
            for(k=0;k<=x.length();k++)
            {
                f[x[k]-'A']++;
            }
            c=0;
            for(k=0;k<26;k++)
            {
                if(f[k]>0)
                c++;
            }
            if(c>ma)
            {
                ma=c;
                an=x;
            }
            else if(c==ma)
            {
                if(an.compare(x)>0)
                an=x;
            }

        }
        printf("Case #%lld: ",i);
        cout<<an<<endl;
        i++;
    }

return 0;
}
