#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string st;
		cin >> st;
		int bal=0,maxbal=0;
		for(int i=0;i<st.size();i++)
		{
			if(st[i]=='(')
				bal++;
			else
				bal--;
			maxbal=max(maxbal,bal);
		}
		for(int i=0;i<maxbal;i++)
			printf("(");
		for(int i=0;i<maxbal;i++)
			printf(")");
		printf("\n");
	}
}
