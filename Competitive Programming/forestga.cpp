#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,l,r,c,i;

    cin>>n>>w>>l;
    int height[n],rate[n];
    for(i=0;i<n;i++)
    cin>>height[i]>>rate[i];
    r=0;c=0;
    while(true)
    {
        for(i=0;i<n;i++)
        {
            if(height[i]>=l)
            {
                r+=height[i];
               // height[i]-=l;
            }
        }
        if(r<w)
        {
            c++;r=0;
            for(i=0;i<n;i++)
            {
                height[i]+=rate[i];
            }
        }
        else
            break;

    }
    cout<<c<<endl;

    return 0;
}

