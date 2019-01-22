#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* head;

void print()
{

}

void Insert(int data, int pos)
{
    Node* temp1 = new Node();
    temp1->data = data;

    if (pos == 1)
    {
        temp1->next = head;
        head = temp1;
    }

    Node* temp2 = new Node();
    temp2 = head;
    for(int i=0; i<pos-2; i++)
        temp2 = temp2->next;

    temp1->next = temp2->next;
    temp2->next = temp1;
}

int main()
{

}
