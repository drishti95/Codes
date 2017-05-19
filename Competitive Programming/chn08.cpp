#include <iostream>
using namespace std;
int main()
{
  unsigned long int N, T;
  long int A, B, output;

  cin>>T;

  while(T--)
  {
  cin>>A>>B>>N;

  switch(N%6)
  {
   case 1: output = A; break;
   case 2: output = B; break;
   case 3: output = B-A; break;
   case 4: output = -A; break;
   case 5: output = -B; break;
   case 0: output = A-B; break;
  }

    output=output%1000000007;
    if(output<0)
     output=output+1000000007;

   cout<<output<<"\n";
  }
  return 0;
}
