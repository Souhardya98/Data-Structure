#include <bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node* next;
};

struct node* head;

void insert (int x){
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print(){
    struct node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
        cout<<temp->data<<"\t";
    }
    cout<<endl;
}

int main ()
{
    head=NULL;
    int n,x;
    cout<<"enter how much number u want in this list :\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }

    return 0;
}
