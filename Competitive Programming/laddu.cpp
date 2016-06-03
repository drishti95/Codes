#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,severity,rnk,score;
    cin>>t;
    char origin[20];
    char s[25];
    while(t--)
    {
        score=0;
        scanf("%d %s",&n,origin);
        while(n--)
        {
            scanf("%s",s);
            if(strcmp(s,"CONTEST_WON")==0)
            {
                cin>>rnk;
                score+=300;
                if(rnk<20)
                score+=20-rnk;

            }
            else if(strcmp(s,"TOP_CONTRIBUTOR")==0)
            score+=300;
            else if(strcmp(s,"CONTEST_HOSTED")==0)
            score+=50;
            else if(strcmp(s,"BUG_FOUND")==0)
            {
                cin>>severity;
                score+=severity;
            }

        }
        if(strcmp(origin,"INDIAN")==0)
        cout<<score/200<<endl;
        else
        cout<<score/400<<endl;



    }

    return 0;
}
