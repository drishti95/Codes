#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<process.h>

using namespace std;
int s[100];
class stackk
{
public:
int top;
stackk():top(-1)
{}
void operator +(int d)
{
top++;
s[top]=d;
cout<<"\n data added is\n"<<s[top];
}
void operator --()
{
top--;
}
void operator ++()
{
int a=top;
while(a>=0)
{
cout<<s[a];
a--;
}
}

};
int main()
{
stackk s1;
int data,ch,f=1;
while(f==1)
{
cout<<"\n 1.push \n 2.pop \n 3.display \n";
cout<<"\n enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n enter the data to push\n";
cin>>data;
s1+data;
break;
case 2:
--s1;
break;
case 3:
++s1;
break;
case 4:return 0;
break;
}
cout<<"\n press 1 to conitnue\n";
cin>>f;
}
return 1;
}
