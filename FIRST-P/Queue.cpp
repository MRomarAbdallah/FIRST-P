#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
    int i = 0;

    q->array = new int[size];

    q->length = size;

    for (i = 0; i < size; i++)
    {
        q->array[i] = -10;
    }
}
void enqueue(Queue* q, unsigned int newValue)
{
    q->array[q->last] = newValue;

    q->last++;
}
int dequeue(Queue* q)
{   
    int i = 0, d = 0;

    q->array[q->first] = q->array[q->first++];

    for (i = 0; i < q->length; i++)
    {

        if (q->last >= i)
        {
            d = q->array[q->first +2];

            q->array[q->first++] = q->array[d];

        }
            
    }

    q->array[q->last] = -10;

    if (q->array[0] == 0)
    {
        return -1;

    }
    else
    {
        return q->array[0];
    }

}
void cleanQueue(Queue* q)
{
    int i = 0;

    for (i = 0; i < q->length;i++)
    {
        q->array[i] = -10;
    }

}
bool isEmpty(Queue* s)
{
    int i = 0 , count = 0;

    for (i = 0;i < s->length;i++)
    {
        if (s->array[i] == -10)
        {
            count++;
        }

    }

    if (count == s->length)
        return true;

    else
        return false;

}
bool isFull(Queue* s)
{
    int i = 0, sam = 0;
    
    for (i = 0;i < s->length;i++)
    {
        if (s->array[i] != -10)
        {
            sam++;
        }

    }

    if (sam == s->length)
        return true;

    else
        return false;

}

