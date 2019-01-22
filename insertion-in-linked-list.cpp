#include <bits/stdc++.h>
using namespace std;

struct node{
int data;
node* next;
};

node* head;

void insert(int x, int y)
{
    node* temp1 = new node();
    temp1->data = y;
    //temp1->next=NULL;
    if(x==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    node* temp2=head;
    for(int i=0;i<x-2;i++)
        temp2=temp2->next;
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void print(){
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
        //cout<<temp->data<<"\t";
    }
    cout<<endl;
}

int main ()
{
    head=NULL;
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
