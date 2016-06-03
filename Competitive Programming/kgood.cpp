#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,i,ma,mi,sum,x,c,x2;
    cin>>t;
    string w;
    int freq[26];

    while(t--)
    {
        for(i=0;i<26;i++)
        freq[i]=0;
        cin>>w>>k;
        for(i=0;i<w.length();i++)
        freq[w[i]-97]++;
        ma=freq[0];
        mi=w.length();
        for(i=0;i<26;i++)
        {
            if(freq[i]>ma)
            ma=freq[i];
            if(freq[i]<mi && freq[i]!=0)
            mi=freq[i];
        }
        if(ma-mi<=k)
        cout<<"0"<<endl;
        else
        {
            sum=0;
            x=mi+k;
            x2=ma-k;
            c=0;
            for(i=0;i<26;i++)
            {
            if(freq[i]>x)
            {
                sum+=freq[i]-x;

            }
             if(freq[i]<x2 && freq[i]!=0)
            {
                c+=freq[i];

            }
            }
            if(sum<c)
            cout<<sum<<endl;
            else
            cout<<c<<endl;
        }

    }
    return 0;
}
