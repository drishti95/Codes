#include <io.stream>
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
        sort(arr);
        int sum = arr[n-1] + arr[n-2] + arr[n-3];
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}
