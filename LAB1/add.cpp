#include "linkedlist.h"

List::List(){
    int data;


    Head=nullptr;
    Tail=nullptr;
}
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
voidList::add(int data, Node*predecessor,Node *Head){
 Node *newNode=new Node();
    newNode->data =data;
    newNode->next=*Head;
    *Head=newNode;

     if(predecessor==NULL){
       cout<<"Predecessor cannot be Null";
        return ;

 }
 Node* newNode=new Node();
 newNode->data=data;
newNode->next=predecessor->next;
predecessor->next=newNode;

}
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

add(Head,-1);
printList(second, -2);
printList(Head);