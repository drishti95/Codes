#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
struct symbol
{
	int sp;
	int ip;
}add,sub,mul,div1,exp1,lbrace;
class stack
{
	char stack[100];
	char pos[100];
	char in[100];
	int top;
	int pos1;
	int op[100];
	int opc;
	public:
		void create()
		{
			top=-1;
			pos1=0;
			opc=-1;
			add.sp=add.ip=sub.sp=sub.ip=1;
		    mul.sp=mul.ip=div1.sp=div1.ip=2;
			exp1.sp=4;
			exp1.ip=3;
			lbrace.sp=lbrace.ip=-1;
			cout<<"Enter the input string:"<<endl;
			cin>>in;
		}
		struct symbol identify(char a)
		{
			if(a=='+')
			return add;
			else if(a=='-')
			return sub;
			else if(a=='*')
			return mul;
			else if(a=='/')
			return div1;
			else if(a=='^')
			return exp1;
			else if(a=='(')
			return lbrace;
		}
		void push(char a)
		{
			if(top==-1)
			{
				stack[++top]=a;
			}
			else
			{
				struct symbol t=identify(a);
				struct symbol g=identify(stack[top]);
				while(g.sp>=t.ip&&top!=-1)
				{
					pos[pos1++]=stack[top--];
					g=identify(stack[top]);
				}
				stack[++top]=a;
			}
		}
		void scan()
		{
		    int i=0;
		    int k=0;
			while(in[i])
			{
				if(in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/'||in[i]=='^'||in[i]=='(')
				{
					push(in[i]);
					i++;
				}
				else if(in[i]==')')
				{
					while(stack[top]!='(')
					{
						pos[pos1++]=stack[top--];
					}
					i++;
					top--;
				}
				else
				{
				pos[pos1++]=in[i++];
				if(!(in[i]>='0'&&in[i]<='9'))
				pos[pos1++]=' ';
			    }
			}
			while(top>=0)
			pos[pos1++]=stack[top--];
		}
		void show()
		{
			cout<<pos;
			cout<<endl;
		}
		void evaluate()
		{
			int i=0;
			while(i<pos1)
			{
				if(isspace(pos[i]))
				i++;
				 else if ( isdigit( pos[i] ))
                {
                   int num = 0;

                  do
                    {
                         num = num*10 + (pos[i]-'0');
                          i++;
                    } while (isdigit(pos[i]));
                            op[++opc]=num;
                }
                else
                {
                	int a=op[opc--];
                	int b=op[opc];
                	if(pos[i]=='+')
                	op[opc]=a+b;
                	else if(pos[i]=='-')
                	op[opc]=b-a;
                	else if(pos[i]=='*')
                	op[opc]=b*a;
                	else if(pos[i]=='/')
                	op[opc]=b/a;
                	else if(pos[i]=='^')
                	op[opc]=pow(b,a);
                	i++;
                }
		    }
		    cout<<"ANSWER: ";
		    cout<<op[opc]<<endl;
		}
}obj;
int main(void)
{
	obj.create();
	obj.scan();
	obj.show();
	obj.evaluate();
	return 0;
}
