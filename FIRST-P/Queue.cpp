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

}

