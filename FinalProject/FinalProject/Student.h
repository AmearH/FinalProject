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
	node * head, *curr, *tail;
public:
	addNode();
	~addNode();

	dataEntry();
	~dataEntry();

	template<typename T>
	Linked_List<T>::()
	{

	};
	template<typename T>
	Linked_List<T>::addNode()
	{

	};
	template<typename T>
	Linked_List<T>::~addNode()
	{

	};
	template<typename T>
	Linked_List<T>::deleteNode()
	{

	};
	template<typename T>
	Linked_List<T>::~deleteNode()
	{

	};
	template<typename T>
	Linked_List<T>::search()
	{

	};
	template<typename T>
	Linked_List<T>::~search()
	{

	};
	template<typename T>
	Linked_List<T>::quit()
	{

	};
	template<typename T>
	Linked_List<T>::~quit()
	{

	};
	template<typename T>
	Linked_List<T>::dataEntry()
	{

	};
	template<typename T>
	Linked_List<T>::~dataEntry()
	{

	};
	template<typename T>
	Linked_List<T>::menu()
	{

	};
	template<typename T>
	Linked_List<T>::~menu()
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
			break;
		}

	};
};