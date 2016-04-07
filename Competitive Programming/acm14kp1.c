#include <stdio.h>
#include <math.h>
int main()
{
long long int t,i,n,j,k,p;
double ax[100001],ay[100001],mini,dis;
scanf("%lld",&t);
p=t+1;
while(t--)
{
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lf %lf",&ax[i],&ay[i]);
}
mini=10000000000000;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            dis=sqrt(pow(ax[i]-ax[j],2)+pow(ay[i]-ay[j],2))+sqrt(pow(ax[k]-ax[j],2)+pow(ay[k]-ay[j],2))+sqrt(pow(ax[i]-ax[k],2)+pow(ay[i]-ay[k],2));
            if(dis<mini)
                mini=dis;
        }
    }
}
printf("Case %lld: %lf\n",p-t,mini);
}

return 0;
}
