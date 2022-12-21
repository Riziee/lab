#include <linkedlist.h>

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
}
 void addTohead(Node *Head,int data){
    Node *newNode=new Node();
    newNode->data =data;
    newNode->next=*Head;
    *Head=newNode;

     if(Head ==NULL){
        Head = *newNode;
        return ;

 }
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



 addTohead(&Head, -1);
 addTohead(&Head, -2);
 printlist(head);
