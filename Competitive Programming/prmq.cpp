#include<bits/stdc++.h>
using namespace std;
int ar[100000];
bool isPrime(int number)
{

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}
int F(int L, int R, int X, int Y)
{
     int result = 0,i,j;
     double k;
     for( i = X ;i <= Y;i++)  {
         if( isPrime(i) ) {
             for( j = L; j<= R;j++ )
             {
                  if( ar[j] % i ==0)
                  result = result + floor(log(ar[j])/log(i));
            }
     }
     }
     return result;
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int r,t,i,L,R,X,Y,p;
cin>>t;
for(i=0;i<t;i++)
cin>>ar[i];
cin>>r;
while(r--)
{
cin>>L>>R>>X>>Y;
p=F(L-1,R-1,X,Y);
cout<<p<<endl;
}
}

