#include<iostream>
using namespace std;

class Student
{
	public:
	string name;
	int id;
	Student(string name,int id)
	{
		this->name=name;
		this->id=id;	
	}
};
class sports :virtual public Student
{
	public:
	int  s_grade;
	sports(int s_grade,string name,int id):Student(name,id)
	{
		sports::s_grade=s_grade;
	}
};

class exam :virtual public Student
{
	public:
	int  e_grade;
exam(int e_grade,string name,int id):Student(name,id)
	{
		exam::e_grade=e_grade;
	}
};

class Result :  public sports,  public exam
{
	string x;
	public:
	Result(int s_grade,int e_grade,string name,int id):		
			exam(e_grade,name,id),
			sports(s_grade,name,id),
			Student(name,id)	
	{
		x="Student is : "+ Student::name +
		   "\nID is :"  + to_string(Student::id) +
		   "\nSports :" + to_string(sports::s_grade) +
		   "\nExams :"  + to_string(exam::e_grade) ;
	}
	void display()
	{
		cout<<Result::x<<endl;
	}
};

int main(void)
{
	cout<<"Mohammad Shahid Raza\n";
	cout<<"A35404821013\n";
	cout<<"Week 7 Question 1 output:";
	
	Result *ob=new Result(96,90,"Pokemon",12345);
	ob->display();
	
	return 0;
}
