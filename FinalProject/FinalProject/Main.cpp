#include "Student.h"
int main()
{
	Linked_List<student>* studentTest = new Linked_List<student>();
	studentTest->addNode();
	studentTest->dataEntry();
	system("pause");
}
/*int main()
{

	char choice;
	int count = 0;
	do
	{
		system("cls");
		cout << "1) Press 1 to enter New Student:" << endl;
		cout << "2) Press 2 to search for a Student Record:" << endl;
		cout << "3) Press 3 to Delete a Student Record:" << endl;
		cout << "4) Press 4 to Exit the Program:" << endl;
		choice = _getch();
		if (choice == '1')
		{
			system("cls");
			dataEntry(count);
			count += 1;

		}
		else if (choice == '2')
		{
			system("cls");
			search();
		}
		else if (choice == '3')
		{
			system("cls");
			del();
		}
		else if (choice == '4')
		{
			system("cls");
			exit(0);
		}
		else
		{
		}
	} while (choice != 5);
	_getch();
}*/

