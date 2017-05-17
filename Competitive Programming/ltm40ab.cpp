#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,c,d,i,co;
	int t;
	cin>>t;
	while(t--)
	{	co=0;
		cin>>a>>b>>c>>d;
		for(i=a;i<=b;i++)
		{
			if(i<c)
			{
				co+=d-c+1;
			}
			else if (i<d)
			{
				co+=d-i;
			}

		}
		cout<<co<<endl;
	}
}
