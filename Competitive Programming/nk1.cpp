#include<bits/stdc++.h>
using namespace std;
long long int one[10005];
long long int result[10005];

long long int c1=1;
long long int k1=1;
int main()
{
    long long int pre,curr,next,i,j=1,f=2,z=1;
    while(z<=9)
     {
            one[c1]=z;
            c1++;
            k1=1;
            j=1;
            f=c1;
            while(j<6)
            {
                for(i=c1-k1;i<f;i++)
                {
                    pre=(one[i]%10)-1;
                    if(pre>=0)
                    {
                        k1++;
                        one[c1]=one[i]*10+pre;
                        c1++;
                    }
                curr=one[i]%10;
                if(curr>=0)
                    {
                        k1++;
                        one[c1]=one[i]*10+curr;
                        c1++;
                    }
                next=one[i]%10+1;
                if(next>=0 && next<10)
                    {
                        k1++;
                        one[c1]=one[i]*10+next;
                        c1++;
                    }
                k1--;
                }
                j++;
                f=c1;
            }
            z++;
    }

    long long int sum=0,n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    sum=0;
    i=1;
    int x=1;
    c1--;
    while(i<=c1)
    {
    	if(one[i]<=n)
    		{
    		sum +=one[i];
    		result[x]=one[i];
    		x++;
    		}
    	i++;
    }

    result[0]=0;
    cout<<x<<endl;
    cout<<sum<<endl;
    sort(result,result+x);

    for(i=0;i<x;i++)
      cout<<result[i]<<" ";
   cout<<endl;
   }
	return 0;
}
