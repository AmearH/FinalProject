/*#include<conio.h>
#include<iostream>

using namespace std;
bool check = true;
struct node
{
	char name[30];
	char degree[30];
	int idNumber;
	int graduatingYear;
	char letterGrade;
	node *next;
}*head, *lastptr;

void dataEntry(int count)
{
	if (count == 0) {
		node *p;
		p = new node;
		cout << "Please enter the name of the student:" << endl;
		gets_s(p->name);
		cout << "Please enter the student's degree:" << endl;
		gets_s(p->degree);
		cout << "Please enter the student's ID number: " << endl;
		cin >> p->idNumber;
		cout << "Please enter the student's graduating year: " << endl;
		cin >> p->graduatingYear;
		cout << "Please enter the student's letter grade: " << endl;
		cin >> p->letterGrade;
		p->next = NULL;


		if (check)
		{
			head = p;
			lastptr = p;
			check = false;
		}
		else
		{
			lastptr->next = p;
			lastptr = p;
		}

		cout << endl << "Student's Data Filed Successfully";
		cout << endl << "Please Press Any Key To Return To Menu";
		_getch();
	}
	else {
		node *p;
		p = new node;
		cout << "Please enter the name of the student: " << endl;
		gets_s(p->name);
		gets_s(p->name);
		cout << "Please enter the student's degree: " << endl;
		gets_s(p->degree);
		cout << "Please enter the student's ID number: " << endl;
		cin >> p->idNumber;
		cout << "Please enter the student's graduating year: " << endl;
		cin >> p->graduatingYear;
		cout << "Please enter the student's letter grade: " << endl;
		cin >> p->letterGrade;
		p->next = NULL;



		if (check)
		{
			head = p;
			lastptr = p;
			check = false;
		}
		else
		{
			lastptr->next = p;
			lastptr = p;
		}

		cout << endl << "Student's Data Filed Successfully";
		cout << endl << "Please Press Any Key To Return To Menu";
		_getch();

	}

}

void search()
{
	node *prev = NULL;
	node *current = NULL;
	int idNumSearch;
	cout << "Please enter ID number to search: ";
	cin >> idNumSearch;
	if (head == 0)
	{
		cout << " Cannot delete from an empty list" << endl;
	}
	else
	{
		prev = head;
		current = head;
		while (current != 0)
		{
			if (current->idNumber == idNumSearch)
			{
				break;
			}
			else
			{
				prev = current;
				current = current->next;
			}
		}

		if (current == 0)
		{
			cout << "Student ID number not found" << endl;
		}
		else
		{
			cout << "Students Name: ";
			cout << current->name << endl;
			cout << "ID Number: ";
			cout << current->idNumber << endl;
			cout << "Degree: ";
			cout << current->degree << endl;
			cout << "Graduating Year: ";
			cout << current->graduatingYear << endl;
			cout << "Letter Grade: ";
			cout << current->letterGrade << endl;
		}
	}
	cout << endl << "Please Press Any Key To Return To Menu";
	_getch();
}
void del()
{
	int idNumDelete;
	cout << "Please enter ID number to delete: ";
	cin >> idNumDelete;

	if (head == 0)
	{
		cout << " Cannot delete from an empty list" << endl;
	}
	else
	{
		node *curr = head;
		node *trail = 0;

		while (curr != 0) // search through linked list
		{
			if (curr->idNumber == idNumDelete)
			{
				break;
			}
			else
			{
				trail = curr;
				curr = curr->next;
			}
		}
		// node with id num not found
		if (curr == 0)
		{
			cout << "ID number " << idNumDelete << " not found" << endl;


		}
		else
		{
			//delete from head
			if (head == curr)
			{
				head = head->next;
			}

			else
			{
				trail->next = curr->next;
			}

			delete curr;
			cout << endl << "Student Data Deleted";

		}


	}

	cout << endl << "Please Press Any Key To Return To Menu";
	_getch();


}*/