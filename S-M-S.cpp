//following are the libraries used in this class
#include<iostream>

using namespace std;//this is for cout and cin statement

#include"S.M.S.h"//this includes the header file "S.M.S"

//constructor
student::student()
{
	name = " ";
	surname = " ";
	assignment = 0.0;
	exam = 0.0;
	quiz = 0.0;
}

//destructor
student::~student()
{

}

//function to set name
void student::setname(string z)
{

	name = z;
}

//function to set surname
void student::setsurname(string x)
{

	surname = x;
}

//function to set quiz marks
void student::setquiz(float c)
{
	quiz = c;

}

//function to set assignment marks
void student::setassignment(float v)
{
	assignment = v;

}

//function to set exam marks
void student::setexam(float b)
{
	exam = b;

}

//function to get name
string student::getname() const
{
	return name;
}

//function to get surname
string student::getsurname()const
{
	return surname;
}

//function to get exam marks
float student::getexam() const
{
	return exam;
}

//function to get assignment marks
float student::getassignment()const
{
	return assignment;
}

//function to get quiz marks
float student::getquiz()const
{
	return quiz;
}

//this function is used calculate marks and tells whether he is pass or fail
bool student::pass()
{
	float marks;
	marks = ((quiz / 30) * 25) + ((assignment / 30) * 25) + ((exam / 40) * 50);
	if (marks >= 40)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//this function tells the grade of that student
char student::getgrade()
{
	float marks;
	marks = ((quiz / 30) * 25) + ((assignment / 30) * 25) + ((exam / 40) * 50);
	if (marks >= 70)
	{
		return 'A';
	}
	else if (marks >= 55)
	{
		return 'B';
	}
	else if (marks >= 45)
	{
		return 'C';
	}
	else if (marks >= 40)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}

//following function print out the data when it is required
void student::printdata()
{
	cout << endl;
	cout << "\t\t\t\tfirst name: " << getname() << endl;//calling of function
	cout << "\t\t\t\tlast name: " << getsurname() << endl;//calling of function
	cout << "\t\t\t\tmarks: " << getquiz() << endl;//calling of function
	cout << "\t\t\t\tassignment marks: " << getassignment() << endl;//calling of function
	cout << "\t\t\t\texam marks: " << getexam() << endl;//calling of function
	cout << "\t\t\t\tgrade: " << getgrade() << endl;//calling of function
}

