#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,*ar,i,x;
		cin>>a;
    ar=new long long int[a];
    for(i=0;i<a;i++)
    ar[i]=1;
    for(i=0;i<a;i++)
    {
        cin>>x;
        if(x)
        ar[x-1]=0;
    }
		for(i=0;i<a;i++)
		{
            if(ar[i]==1)
            cout<<i+1<<" ";
		}

}

