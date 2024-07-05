//following are the libraries used in this class
#include<iostream>

using namespace std;//this is for cout and cin statement

#include"S.M.S.h"//this includes the header file "S.M.S"

//this is the main function of the program
int main()
{
	//*a is the object of the class student
	student* a;

	int s;//declaration of array size
	cout << "\n\n\n\t\t\t\t";
	cout << "please enter number of students:- ";
	cin >> s;
	system("cls");//for clearance of screen

	//dynamic memory allocation of a
	a = new student[s];

	//loop for array
	for (int i = 0; i < s; i++)
	{
		//asks user to input data
		cout << "\n\n\n\t\t\t\tplease enter the data for student <" << i + 1 << ">";
		cout << endl << endl;

		//users name
		cout << "\t\t\t\tfirst name:- ";
		string na;
		cin >> na;
		a[i].setname(na);//calling of function

		//users surname
		cout << "\t\t\t\tlast name:- ";
		string l;
		cin >> l;
		a[i].setsurname(l);//calling of function

		//users quiz marks
		int qui;//condition checking
		//it checks if condition is true then it exicutes else it repaets the question
	qui:
		{
			cout << "\t\t\t\tquiz marks:- ";
			float q;
			cin >> q;
			if (q <= 30)
			{
				a[i].setquiz(q);//calling of function
			}
			else
			{
				cout << "\t\t\t\ttry again " << endl;
				goto qui;
			}
		}

		float ass;//condition checking
		//it checks if condition is true then it exicutes else it repaets the question
	ass:
		{
			cout << "\t\t\t\tmarks:- ";
			float ma;
			cin >> ma;
			if (ma <= 30)
			{
				a[i].setassignment(ma);//calling of function
			}
			else
			{
				cout << "\t\t\t\ttry again" << endl;
				goto ass;
			}
		}

		int ex;//condition checking
		//it checks if condition is true then it exicutes else it repaets the question
	ex:
		{
			cout << "\t\t\t\texam marks:- ";
			float e;
			cin >> e;
			if (e <= 40)
			{
				a[i].setexam(e);//calling of function
			}
			else
			{
				cout << "\t\t\t\ttry again " << endl;
				goto ex;
			}
		}

		system("cls");
	}

	cout << "\n\n\n\t\t\t\t*menu*";
	cout << endl << endl;
	cout << "\t\t\t\tshow data of all the students <1>";
	cout << endl;
	cout << "\t\t\t\tshow data of the individual student <2>";
	cout << endl;
	cout << "\t\t\t\texit <3>";
	cout << endl << endl;

	int cht;//condition checking
	//it checks if condition is true then it exicutes else it repaets the question
cht:
	{
		cout << "\t\t\t\tplease enter your choice:- ";//asks user for its choice
		int choice;
		cin >> choice;

		system("cls");//system clear

		//it checks if user enters 1 ,2 or 3
		if (choice >= 1 || choice <= 3)
		{
			if (choice == 1) //if user inputs 1 then,
			{
				cout << "\n\n\n";
				for (int i = 0; i < s; i++)
				{
					//this loop prints the detail of all students only and only if user inputs 1 
					cout << "\t\t\t\there are the details: " << i + 1 << endl;
					a[i].printdata();
					cout << endl;
				}
			}
			else if (choice == 2) //if user inputs 2 then,
			{
				int cho;//condition checking
				//it checks if condition is true then it exicutes else it repaets the question
			cho:
				int n;
				cout << "\n\n\n\t\t\t\tplease enter the student number: ";
				//it asks user whose data will be shown
				cin >> n;

				//it checks if iput is smaller then array size 
				if (n <= s)
				{
					cout << "\t\t\t\there are the details: " << n << endl;

					//it print out the details of that student
					a[n - 1].printdata();
				}

				//it executes when user input wrong data
				else
				{
					cout << "\t\t\t\ttry again ";
					cout << endl;
					//it will go to cho statment in case user inputs wrong data, this "goto" will repeat all instructions
					goto cho;
				}
			}

			//if user inputs 3 then,
			else if (choice == 3)
			{

				//it deletes the dynamic memory allocation
				delete[] a;
			}

			//it executes when user input wrong data
			else
			{
				cout << "\n\n\n\t\t\t\ttry again please";
				cout << endl;
				cout << endl;
				//it will go to cho statment in case user inputs wrong data, this "goto" will repeat all instructions
				goto cht;
			}
		}
	}

	return 0;
}