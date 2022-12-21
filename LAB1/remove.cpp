#include "lisnkedlist.h"
ist::List(){
    int data;


    Head=nullptr;
    Tail=nullptr;
}
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
    voidList::remove(Node* &Head,int data,Node* temp){
       if(Head==NULL){
        return;
       }
        Node* temp=head;
        while(temp->next->data!=data){
            temp=temp->next;
        }
Node* todelete=temp->next;
temp->next=temp->next->next;
delete todelete;


    }
    voidList::void removeFromHead(Node* &Head){
    node* todelete=head;
    Head=Head->next;
    delete todelete;

    int main(){
 Node* Head=new Node();
 Node* second= new Node();
 Node* Third = new Node();

 Head->data=1
 Head->next=second;
 second->data = 2;
 second->next = third;
 third->data=3;
 third->next=NULL;

 remove(Head,2);
 printList(Head);
 removeFromHead(Head);
    }
}