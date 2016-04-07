#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j =1; j<=t; j++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int x =0; x<n; x++)
        {
            for (int y = x+1; y<n; y++)
            {
                int temp;
                if(arr[y]<arr[x])
                {
                    temp=arr[y];
                    arr[y]=arr[x];
                    arr[x]=temp;
                }
            }
        }
        int sum = arr[n-1] + arr[n-2] + arr[n-3];
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}
