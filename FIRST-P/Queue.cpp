#include "Queue.h"
#include <iostream>
void print(Queue* q)
{
    int i = 0;
    for (i = 0; i < q->length; i++)
    {
        std::cout << q->array[i] << std::endl;
    }
}
void initQueue(Queue* q, unsigned int size)
{
    int i = 0;
    q->last = 0;

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
    int i = 0, temo = 0;
    temo = q->array[0];

    if (q->array[0] == -10)
    {
        return -1;

    }

    for (i = 0; i < q->length; i++)
    {

        q->array[i] = q->array[i+1];
            
    }
    q->array[q->last-1] = -10;

    return temo;

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

