#include<bits/stdc++.h>
using namespace std;

int top=-1;
char arr[400];
void push(int t)
{
arr[++top]=t;
}
void pop()
{
while(arr[top]!='('&& top>=0)
        {  printf("%c",arr[top--]);
        }
   if(arr[top]=='(')
       top--;
}
int main()
{ int n,i,j;
  char a[400];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%s",a);
    for(j=0;a[j]!='\0';j++)
    {
    if(a[j]=='('||a[j]=='+'||a[j]=='*'||a[j]=='-'||a[j]=='%'||a[j]=='/'||a[j]=='^')
         push(a[j]);
      else if(a[j]==')')
         pop();
      else
        printf("%c",a[j]);
    }
    if(top!=-1)
        pop();
      printf("\n");
  }
  return 0;
}
