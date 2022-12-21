#include "linkedlist.h"


voidList::void traverse(){
    if(Head==NULL)
    cout<<"The list is empty"<<endl;
    else{
        Node *h=Head;
        cout<<"\nList is: ";
        while(*h!=NULL){
            cout<<"\t"<<h->data;
            h=h->next;
        }
    }
}