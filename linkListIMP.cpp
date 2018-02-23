
//******************************************** Implimantation CPP  ****************************************//

#include "linkList.h"


linklist::linklist()       // defination for consrtucture
{
	head = NULL;

}
linklist::~linklist()    // defination for destructor

{
	node *count;
	if (head == NULL)
		return;
	while (head != NULL)
	{
		count = head->link;
		delete head;
		head = count;
	}
}

void linklist::insert(int num)  // inserting element at the End of the list
{
	node *count;
	node *temp;
	if (head == NULL)        // if head is null. head will assigned to new node
	{
		head = new node;
		head->data = num;
		head->link = NULL;
	}
	else
	{
		count = head;
		while (count->link != NULL)

			count = count->link;
		    temp = new node;
		    count->link = temp;
	      	temp->data = num;
	      	temp->link = NULL;
		
	}
}

int linklist::numOfElements()      // this function will count the number of elements in the list.
{
	node *count = head;
	int counting = 0;             // variable that will count number of element, at the beginig it is assigned as 0
	while (count != NULL)
	{
		counting++;               // counting will incremented here 
		count = count->link;
	}
	return counting;             // return number of counting element
}

bool linklist::isEmpty() const          // using bool data type to see if list is empty or full
{
	if (head == NULL)                   // using if else statment to see if list is full it will reaturn 1. otherwise it will return o
	{
		return true;
	}
	else
	{
		return false;
	}
}
