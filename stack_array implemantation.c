#include<stdio.h>
#define max 101
int A[max];
int top=-1;

void Push(int x)
{
    if(top==max-1)
    {
        printf("overflow\n");
        return;
    }
    A[++top]=x;
}

void Pop()
{
    if(top==-1)
    {
        printf("no elements to pop");
        return;
    }
    top--;
}

int Top()
{
   return A[top];
}

int isempty()
{
    if (top==-1) return 1;
    else return 0;
}

void Print()
{
    for(int i=0;i<=top;i++)
        printf("%d ",A[i]);
    printf("\n");
}

int main()
{
    Push(2);Print();
	Push(5);Print();
	Push(10);Print();
	Pop();Print();
	Push(12);Print();

}
