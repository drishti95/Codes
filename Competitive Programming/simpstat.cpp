#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    float c=0;
	    sort(a,a+n);
	    for(int i=k;i<n-k;i++)
	    c+=a[i];
	    c/=(n-k-k);
	    cout<<fixed<<c<<endl;
	}
	return 0;
}
