
//........................... lab 1 task 1........................//
//.......................Programmed by: Gayatri Patel.............//



#include <iostream>
#include "linkList.h"   // including header file
using namespace std;

int main()     // main 

{

	linklist object;     // defining  linklist class object
	//int x;

	cout << "***************  before Adding element *******************" << endl;  // calling linklist class function
	cout << "Number of elements = " << object.numOfElements() << endl;
	cout << "it will disply '1'if the list is empty, otherwise '0':  " << object.isEmpty() << endl << endl;   // it will disply if list is empty or not.
	cout << "***************  After adding element  *******************" << endl;

	object.insert(5);  // inserting element
	object.insert(6);
	object.insert(30);
	object.insert(45);
	object.insert(11);
	object.insert(20);

	cout << "number of elements in the list is = " << object.numOfElements() << endl << endl;  // it will count how many element is entered
	cout << "it will disply '1'if the list is empty, otherwise '0':  " << object.isEmpty() << endl << endl;   // it will disply if list is empty or not.



	return 0;
}
