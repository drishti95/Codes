#include<bits/stdc++.h>
using namespace std;

int divide(int x, int y)
{
	if(y)
	{
		int r = x%y;
		if(r)
			return (x/y + 1);
		return x/y;
	}
	return 0;
}

int main()
{
    int n,b,sum=0,i,ans,c,t;
    cin>>n>>b;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    ans = divide(sum,b);
   t=ans;
    for(i=0;i<n;i++)
    {
       c = divide(a[i],ans);
        b -= c;
        sum -= a[i];
        if(b!=0)
        {
            ans = divide(sum,b);
            if(t<ans)
                t=ans;
        }
        if(b==0)
        break;
    }
    if(sum>t)
    {
        cout<<sum<<endl;
    }
    else
        cout<<t<<endl;
    return 0;
}
