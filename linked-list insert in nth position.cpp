#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;

void insert(int pos, int data)
{
    Node* temp1 = new Node();
    temp1->data = data;
//    temp1->next = NULL;
    if(pos == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = new Node();
    temp2 = head;
    for(int i=0; i<pos-2; i++)
            temp2 = temp2->next;

    temp1->next = temp2->next;
    temp2->next = temp1;
}

void print()
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    insert(1, 5);
    print();
    insert(2, 3);
    print();
    insert(3, 7);
    print();
    insert(2, 2);
    print();
    insert(1, 0);
    print();
    return 0;
}
