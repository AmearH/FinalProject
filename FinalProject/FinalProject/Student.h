#pragma once
#include <string>
#include <iostream>
using namespace std;

struct student
{
	string name;
	string degree;
	char letterGrade;
	int idNumber;
	int gradYear;
};

template <typename T>
struct node
{
	node* prev;
	T data;
	node* next;
};
template<typename T>
class Linked_List
{
private:
	node<T> * head, *curr, *tail;
public:

	void LinkedList()
	{
		head = NULL;
		curr = NULL;
		tail = NULL;
	};

	void addNode();

	void deleteNode();

	void run();

	void print();

	void search();

	void quit();

	void dataEntry();

	void menu();
};

	/*template<typename T>
	Linked_List<T>::LinkedList()
	{
		head = NULL;
		curr = NULL;
		tail = NULL;
	};
	template<typename T>
	Linked_List<T>::~LinkedList()
	{

	};*/
	template<typename T>
	void Linked_List<T>::addNode()
	{

		node<T> *tmp = new node<T>;
		tmp->next = NULL;

		if (head == NULL)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tail->next;
		}
	};
	/*template<typename T>
	Linked_List<T>::~addNode()
	{

	};*/
	template<typename T>
	void Linked_List<T>::deleteNode()
	{
		tail->prev;
		tail->next = NULL;
	};
	/*template<typename T>
	Linked_List<T>::~deleteNode()
	{

	};*/
	template<typename T>
	void Linked_List<T>::run()
	{
		tail = tail->next;
		curr = curr->tail;
		
	};
	template<typename T>
	void Linked_List<T>::print()
	{
		//need to change names and add another layer
		cout << "Students Name: ";
		cout << curr->data->name << endl;
		cout << "ID Number: ";
		cout << curr->data->idNumber << endl;
		cout << "Degree: ";
		cout << curr->data->degree << endl;
		cout << "Graduating Year: ";
		cout << curr->data->gradYear << endl;
		cout << "Letter Grade: ";
		cout << curr->data->letterGrade << endl;
	};
	template<typename T>
	void Linked_List<T>::search()
	{
		int idNumSearch;
		cout << "Please enter ID number to search: ";
		cin >> idNumSearch;
		if (head == NULL)
		{
			cout << " Cannot delete from an empty list" << endl;
		}
		else
		{
			prev = head;
			curr = head;
			while (curr != NULL)
			{
				if (curr->data->idNumber == idNumSearch)
				{
					break;
				}
				else
				{
					prev = curr;
					curr = curr->next;
				}
			}

			if (curr == NULL)
			{
				cout << "Student ID number not found" << endl;
			}
			else
			{
				Linked_List<T>::print();
			}
		}
		cout << endl << "Please Press Any Key To Return To Menu";
		_getch();
	};
	/*template<typename T>
	Linked_List<T>::~search()
	{

	};*/
	template<typename T>
	void Linked_List<T>::quit()
	{
		system("cls");
		exit(0);
	};
	/*template<typename T>
	Linked_List<T>::~quit()
	{

	};*/
	template<typename T>
	void Linked_List<T>::dataEntry()
	{
		
		// need to add stuff in between
		cout << "Please enter the name of the student:" << endl;
		cout << "Please enter the student's degree:" << endl;
		cout << "Please enter the student's ID number: " << endl;
		cout << "Please enter the student's graduating year: " << endl;
		cout << "Please enter the student's letter grade: " << endl;

	};
	/*template<typename T>
	Linked_List<T>::~dataEntry()
	{

	};*/
	template<typename T>
	void Linked_List<T>::menu()
	{
		system("cls");
		cout << "1) Press 1 to add New Student:" << endl;
		cout << "2) Press 2 to search for a Student Record:" << endl;
		cout << "3) Press 3 to Delete a Student Record:" << endl;
		cout << "4) Press 4 to Exit the Program:" << endl;

		bool running;
		switch (running)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			Linked_List<T>::quit();
			break;
	};
};