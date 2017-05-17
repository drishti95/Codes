#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,l[100],r[100],p,mp,m;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++)
cin>>l[i];
for(i=0;i<n;i++)
cin>>r[i];
mp=0;
for(i=0;i<n;i++)
{
    p=l[i]*r[i];
    if(p>mp)
    {
    mp=p;
    m=i;
    }
    if(p==mp)
    {
        if(r[i]>r[m])
        m=i;
    }
}
cout<<m+1<<endl;
}

return 0;
}


