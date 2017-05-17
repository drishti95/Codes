
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,i,j,t2;
cin>>n>>m;
int f[m],p[m],x[m],ar[n];
string r;
vector <string>s;
for(i=0;i<n;i++)
cin>>ar[i];
for(i=0;i<m;i++)
{
cin>>f[i];
cin>>p[i];
cin>>r;
s.push_back(r);
x[i]=i;
}
  for (i=0; i<m-1; i++)
  {
    for (j=0; j<m-1-i; j++)
    {
      if (p[x[j]] < p[x[j+1]])
      {

        t2=x[j];
        x[j]=x[j+1];
        x[j+1]=t2;
      }
    }
  }
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(ar[j]==f[x[i]])
{
cout<<s[x[i]]<<endl;
p[x[i]]=-1;
}
}
}

for(i=0;i<m;i++)
{
if(p[x[i]]>=0)
cout<<s[x[i]]<<endl;
}
return 0;
}
