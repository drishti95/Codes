#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int t,T1,T2,w1,w2;
float p;
cin>>t;
while(t--)
{
cin>>T1>>T2>>w1>>w2;
if(w1==0 && w2==0)
p=0.000000;
else if(w1>=T2 && w2>=T1)
p=1.000000;
else if(w1>=T2 && (T1-w2)<T2)
p=1-((0.5*(T1-w2)*(T1-w2))/(T1*T2));
else if(w1>=T2 && (T1-w2)>=T2)
p=(0.5*T2*T2+w2*T2)/(T1*T2);
else if(w2>=T1 && (T2-w1)<T1)
p=1-((0.5*(T2-w1)*(T2-w1))/(T1*T2));
else if(w2>=T1 && (T2-w1)>=T1)
p=(0.5*T1*T1+w1*T1)/(T1*T2);
else if(((T2-w1)<=T1) && ((T1-w2)<=T2))
p=1-(((0.5*(T2-w1)*(T2-w1))+(0.5*(T1-w2)*(T1-w2)))/(T1*T2));
else if(((T2-w1)>T1) && ((T1-w2)<=T2))
p=1-(((0.5*(T1-w2)*(T1-w2))+(T1*(T2-T1-w1))+0.5*T1*T1)/(T1*T2));
else if(((T2-w1)<=T1) && ((T1-w2)>T2))
p=1-(((0.5*(T2-w1)*(T2-w1))+(T2*(T1-T2-w2))+0.5*T2*T2)/(T1*T2));
else
p=0.000000;

printf("%f\n",p);

}

return 0;


}

