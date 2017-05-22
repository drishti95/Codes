#include <iostream>
using namespace std;
int main()
{
  long long int  T,x1,x2,a1,a2,y1,y2,b1,b2;
  cin>>T;

  while(T--)
  {
  cin>>x1>>y1>>x2>>y2;
  cin>>a1>>b1>>a2>>b2;
   if(x1==x2 && y1==y2)
   {
     if(a1==a2)
     {
        if(a1==x1)
        {
          if(b1>=y1 && b2<=y1 || b1>=y2 && b2<=y2 || b2>=y1 && b1<=y1 || b2>=y2 && b1<=y2)
          cout<<"yes"<<endl;
          else
          cout<<"no"<<endl;
        }
        else
        cout<<"no"<<endl;

     }
     else if(b1==b2)
     {
        if(b1==y1)
        {
          if(a1>=x1 && a2<=x1 || a1>=x2 && a2<=x2 || a2>=x1 && a1<=x1 || a2>=x2 && a1<=x2)
          cout<<"yes"<<endl;
          else
          cout<<"no"<<endl;
        }
        else
        cout<<"no"<<endl;
   }
   }
   else  if(x1==x2)
    {
     if(a1==a2)
     {
        if(a1==x1)
        {
          if(y1>=b1 && y2<=b1 || y1>=b2 && y2<=b2 || y2>=b1 && y1<=b1 || y2>=b2 && y1<=b2 || b1>=y1 && b2<=y1 || b1>=y2 && b2<=y2 || b2>=y1 && b1<=y1 || b2>=y2 && b1<=y2 )
          cout<<"yes"<<endl;
          else
          cout<<"no"<<endl;
        }
        else
        cout<<"no"<<endl;
     }
     else
     {
       if((a1==x1 && b1==y1)||(a1==x2 && b1==y2)||(a2==x1 && b2==y1)||(a2==x2 && b2==y2))
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;
     }
    }
    else
    {
     if(b1==b2)
     {
        if(b1==y1)
        {
          if(x1>=a1 && x2<=a1 || x1>=a2 && x2<=a2 || x2>=a1 && x1<=a1 || x2>=a2 && x1<=a2 || a1>=x1 && a2<=x1 || a1>=x2 && a2<=x2 || a2>=x1 && a1<=x1 || a2>=x2 && a1<=x2)
          cout<<"yes"<<endl;
          else
          cout<<"no"<<endl;
        }
        else
        cout<<"no"<<endl;
     }
     else
     {
       if((a1==x1 && b1==y1)||(a1==x2 && b1==y2)||(a2==x1 && b2==y1)||(a2==x2 && b2==y2))
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;
     }
    }
  }

  return 0;
}
