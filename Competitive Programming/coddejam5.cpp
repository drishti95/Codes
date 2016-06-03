#include<bits/stdc++.h>
using namespace std;
   int ar[26];

    int p=0;
int isEmpty(int n)
{
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=0)
            return 0;
            else
            continue;
        }
        return 1;

}
int main()
{
     int t,n,i,z=0,last=0;
    cin>>t;
    while(z<t)
    {
        char str[40]="";
        z++;last=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
         printf("Case #%d: ",z);
        while(!isEmpty(n))
        {
            if(ar[0]>ar[1])
            {
                str[p++]='A';
                ar[0]--;
                if(ar[1]>ar[2])
                {str[p++]='B';ar[1]--;str[p++]=' ';last=p-2;
                }
                else if(ar[2]!=0)
                {str[p++]='C';str[p++]=' ';
                ar[2]--;
                last=p-2;}
            }
            else
            {
                if(ar[1]!=0)
                {str[p++]='B';ar[1]--;}
                if(ar[0]>ar[2])
                {str[p++]='A';ar[0]--;str[p++]=' ';last=p-2;}
                else if(ar[2]!=0)
                {str[p++]='C';str[p++]=' ';ar[2]--;last=p-2;}
            }

        }

        str[p++]=str[last];
        str[p++]=str[last+1];
        for(i=last+2;i<p-1;i++)
        {
        str[i]=str[i+1];
        }

        str[p-1]='\n';
        printf("%s",str);
    }
    return 0;
}
