//following are the libraries used in this class
#include<iostream>

using namespace std;//this is for cout and cin statement

//here student is the class
class student
{
	//following are the data members of student and the are set private
	string name;
	string surname;
	int rollno;
	float quiz;
	float assignment;
	float exam;

public: //public is a key word

	//following are constructors and destructors used in this program
	student();
	~student();

	//following are the member functions used in this program	
	//these are settres
	void setname(string z);
	void setsurname(string x);
	void setquiz(float c);
	void setassignment(float v);
	void setexam(float b);

	//these are getter functions
	string getname() const;
	string getsurname() const;
	float getexam() const;
	float getassignment()const;
	float getquiz()const;

	//these functions are used for grading marks
	bool pass();
	char getgrade();

	//this function is used to print out data
	void printdata();

};