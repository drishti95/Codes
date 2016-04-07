#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(void)
{
	char a[10][100];
	ofstream f;
	f.open("d.txt");
	cout<<"Enter the no. of lines:"<<endl;
	int n;
	cin>>n;
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
	    fflush(stdin);
		gets(&a[i][0]);
	}
	for(int i=0;i<n;i++)
	{
		f<<&a[i][0];
	}
	f.close();
	ifstream g;
	ofstream k;
	g.open("d.txt");
	k.open("d1.txt");
    int w=0;
    char c;
	int flag=0,flag2=0;
    g>>noskipws>>c;
	while(!g.eof()){
	if(c=='{'&&flag2==0){
		k<<endl<<setw(w)<<'{';//<<endl;
		w=w+5;
		k<<endl;
		k<<setw(w);
	}
	else if(c=='}'&&flag2==0){
		  w=w-5;
		 k<<endl<<setw(w)<<'}';
		 k<<endl;
		 k<<setw(w);

	}

	else if(c=='('){
		 flag=1;
		 k<<'(';
	}
	else if(c==';' && flag==0&&flag2==0){
		 k<<';';
		 k<<endl;
		 k<<setw(w);
	}

	else if(c==')'){
		 flag=0;
		 k<<')';
	}
	 else if(c=='\n'){
		 k<<endl;
		 k<<setw(w);

	}

	else
	k<<c;
	g>>noskipws>>c;
}
    k.close();
	g.close();
	return 0;
}

