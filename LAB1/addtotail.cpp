#include "linkedlist.h"


   List::List(){
    int data;


    Head=nullptr;
    Tail=nullptr;
}
void addToTail(int info,Node *next, Node Head, Node temp){
    Node *n=newnode(info);
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

Node* Head=NULL;
addToTail(Head,1);
addToTail(Head,2);
addToTail(Head,3);
display (Head);
return 0;
}