#include<iostream>
#include<stdio.h>
using namespace std;
struct student
{
	char name[20];
	int marks;
};
int main()
{
	student **s;
	int *max;
	int d,n;
	cout<<"Enter the no. of Depertment: ";
	cin>>d;
	max=new int[d];
	s=new student *[d];
	for(int i=0;i<d;i++)
	{
		cout<<"\nEnter no. of students in Dept "<<i+1<<": ";
		cin>>n;
		s[i]=new student[n];
		max[i]=0;
		for(int j=0;j<n;j++)
		{
			cout<<"Enter Name: ";
			fflush(stdin);
			gets(s[i][j].name);
			fflush(stdin);
			cout<<"Enter Marks: ";
			cin>>s[i][j].marks;
			if(s[i][j].marks>s[i][max[i]].marks)
				max[i]=j;
		}
	}
	cout<<"Heighest:\n";
	for(int i=0;i<d;i++)
	{
		cout<<"\nName: "<<s[i][max[i]].name<<"\tDept: "<<i+1<<"\tMarks: "<<s[i][max[i]].marks;
	}
}
