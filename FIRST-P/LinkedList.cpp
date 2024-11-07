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

	linkedList* s = num;
	l->next = l;
	l->num = l->length;
}
linkedList* rmovelinkedList(linkedList* l)
{
	linkedList* temo = 0;
	temo = l->next;
	free(l);
	l = temo;
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

