
class pp
{
void getpriorty(int ch)
{
switch(ch)
{
case '+':
case '-': p=0;
	break;
case '*':
case '/':
case '%':p=1;
	break;
case ')':p=2;
	break;
}
}
void check()
{
st=kk="";
m=0;
ln=ss.length();
for(i=0;i<ln;i++)
{
ch=ss.charAt(i);
if(ch>=97&&ch<=122)
kk=kk+ch;
else
{
if(m==0)
{
st=st+ch;
m++;
}
else
{
if(getpriorty(ch)>getpriorty(st.charAt(m-1)))
{
st=st+ch;
m++;
}
else
{
while(getpriorty(st.charAt(m-1))>+getpriorty(ch)&&m!=0)
{
kk=kk+st.chartAt(m-1);

st=st.substring(0,m-1);
m--;
}
st=st+ch;
m++;
}
}
}

}
}


