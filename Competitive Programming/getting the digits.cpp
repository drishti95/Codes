#include<bits/stdc++.h>
using namespace std;
int a[14];
void saveIn(char str[])
{
int i;
for(i=0;i<14;i++)
a[i]=0;
for(i=0;i<strlen(str);i++)
{
a[str[i]-65]=a[i]++;
}
}

int main()
{
    long long int t,l,n,i,z=0;
    cin>>t;
    while(z<t)
    {
        z++;
        scanf("%s",s);
        printf("Case #%lld: ",z);
        l=strlen(s);
        saveIn(s);



    }
}
