#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int t,n,n1,i;
	char s[100001];
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    n=strlen(s);
	    n1=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	            n1++;
	    }
	    if(n1==n-1 || n1==1)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}

