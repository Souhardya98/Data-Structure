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
    if(rear == size - 1)
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

    else if (isempty())
    {
        front=0;
        rear=0;
        A[rear]=x;
    }

    else
    {
        A[++rear]=x;
    }

}

void Dequeue()
{
    if (isempty())
    {
        printf("empty");
        return;
    }

    else if (front==rear)
    {
        front=-1;
        rear=-1;
    }

    else
    {
        front++;
    }
}

int Front()
{
    if(front==-1)
    {
        printf("empty");
        return -1;
    }
    return 1;
}

void Print()
{
    for(int i=front;i<=rear;i++)
        printf("%d ",A[i]);
    printf("\n");

}


int main()
{
   Enqueue(2);  Print();
   Enqueue(4);  Print();
   Enqueue(6);  Print();
   Dequeue();	  Print();
   Enqueue(8);  Print();
}
