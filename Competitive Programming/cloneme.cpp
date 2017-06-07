#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,ar[100000],a,q,b,i,c,d,n,x,f;
	cin>>t;
	while(t--)
	{

		cin>>n>>q;
		for(i=0;i<n;i++)
		cin>>ar[i];
		while(q--)
        {
            cin>>a>>b>>c>>d;
            int s1[100000],s2[100000];
            x=0;
            for(i=a-1;i<b;i++)
            {
              s1[x++]=ar[i];
            }
            x=0;f=0;
            for(i=c-1;i<d;i++)
            {
              s2[x++]=ar[i];
            }
            sort(s1,s1+x);
            sort(s2,s2+x);
            for(i=0;i<x;i++)
            {
              if(s1[i]==s2[i])
              continue;
              else
              f++;
            }
            if(f<=1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }

	}

	return 0;
}

