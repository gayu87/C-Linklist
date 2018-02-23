
//***********************************  linkList.h  **********************************************//

#include <iostream>
using namespace std;


#ifndef LINKLIST_H
#define LINKLIST_H

class linklist   // linklist class
{
public:            // public member

	void insert(int num);   // inserts an element ;
	int numOfElements();    // count an element
	linklist();             // Constructor ;
	~linklist();            // destructor
	bool isEmpty() const;    // to see if list is empty or not

private:     // private member of linklist class
	struct node     // creating node
	{
		int data;     // integer data variable 
		node *link;    // pointer that store next node address 
	};
	node *head;        // start/ head pointer 
};
#endif