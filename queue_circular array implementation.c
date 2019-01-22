#include<stdio.h>
#define size 101

int A[size];
int front=-1,rear=-1;

int isempty()
{
    if(front==-1 && rear==-1)
        return 1;
    else return 0;
}

int isfull()
{
    if((rear+1)%size==front)
    {
        printf("Queue is full\n");
        return 1;
    }
    else return 0;
}
void Enqueue(int x)
{
    if(isfull())
    {
        printf("Overflow");
        return;
    }

    else if (isempty())  front = rear = 0;

    else     rear = (rear+1)%size;

    A[rear]=x;
}

void Dequeue()
{
    if (isempty())
    {
        printf("empty");
        return;
    }

    else if (front==rear)    front=rear=-1;

    else
    {
        front=(front+1)%size;
    }
}

int Front()
{
    if(front==-1)
    {
        printf("empty");
        return -1;
    }
    return A[front];
}

void Print()
{
    int count= (rear+size-front) % size + 1;
    for(int i=0;i<count;i++)
    {
        int index = (front+i) % size ;
        printf("%d ",A[index]);
    }
    printf("\n\n");
}


int main()
{
   Enqueue(2);  Print();
   Enqueue(4);  Print();
   Enqueue(6);  Print();
   Dequeue();	  Print();
   Enqueue(8);  Print();
}
