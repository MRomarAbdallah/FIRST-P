#include "LinkedList.h"
#include <iostream>

linkedList* initlinkedList( unsigned int num)
{
	linkedList* l = new linkedList;
	l->num = num;
	l->next = NULL;
	return l;
}
void adderlinkedList(linkedList* l, unsigned int num)
{
	while (l != NULL)
	{
		l->next->num = l->num;
		l->num = num;
	}
	
}
linkedList* rmovelinkedList(linkedList* l)
{
	l->num = l->next->num;
	l->next->num = NULL;
}
void printList(linkedList* l)
{
	int i = 0;
	while(l != NULL)
	{
		std::cout << l->num << std::endl;
		l = l->next;

	}
}

