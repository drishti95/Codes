#include<bits/stdc++.h>
using namespace std;
 int n;
char grid[2][500];

int main() {
    int t,k,i,j,n,f,r,c,x;
    cin>>t;
    while(t--)
    {
    cin >> n ;f=0;x=0;
    for(i=0;i<2;i++){
        for(j=0;j<n;j++){
            cin >> grid[i][j];
            if(!f && grid[i][j]=='#')
            {
              f=1;r=i;c=j;

            }
        }
    }
    j=c;
        if(f==1)
        {
        for(j=c;j<n;j++)
        {
             if(grid[0][j]=='#'||grid[1][j]=='#')
             {
             if(r==1)
                {
                    if(grid[0][j]=='#'&& grid[1][j]=='#')
                    {
                        x++;
                        r=0;
                        continue;
                    }
                    if(grid[0][j]=='#')
                    break;
                    if(grid[1][j]=='#')
                    {
                        r=1;
                        continue;
                    }
                }
                if(r==0)
                {
                    if(grid[0][j]=='#' && grid[1][j]=='#')
                    {
                        x++;
                        r=1;
                        continue;
                    }
                    if(grid[1][j]=='#')
                    break;
                    if(grid[0][j]=='#')
                    {
                        r=0;
                        continue;
                    }
                }
            }
            else
            break;
        }
        }
        x+=j-c;

    k=0;
    for(i=0;i<2;i++){
        for(j=0;j<n;j++){
            if(grid[i][j]=='#')
            k++;
        }
    }



    if(k==x)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    }
    return 0;
}
