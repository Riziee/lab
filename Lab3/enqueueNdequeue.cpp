#include "llqueue.h"
List::List(){
    int data;
    Head=nullptr;
    Tail=nullptr;
}
void enqueue(int data,Node *next, Node Head, Node temp){
    Node *n=newnode(int data);
     if(Head ==NULL){
        Head = n;
        return ;

    }
    else  
    Node *temp=Head;
    while(temp->next!=nullptr){
        temp=temp->next;

    
    }
    temp->next=n;
}
void display(Node *Head){
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    }
int main(){

Node *Head=NULL;
enqueue(Head,1);
enqueue(Head,2);
enqueue(Head,3);
display (Head);
return 0;
}
voidList::void dequeue(Node* &Head){
    if(Head==NULL){
        return;
       }
    node* todelete=head;
    Head=Head->next;
    delete todelete;
}