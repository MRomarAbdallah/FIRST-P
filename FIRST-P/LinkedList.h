
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct linkedList
{
	int num;
	int length;
	linkedList* next;


} linkedList;

linkedList* initlinkedList( unsigned int num);
void adderlinkedList(linkedList* l, unsigned int num);
linkedList* rmovelinkedList(linkedList* l);
void printList(linkedList* l);


#endif /* LINKEDLIST_H */#pragma once