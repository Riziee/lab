#include <iostream>
#include "linkedlist.h"

struct node
{
    int data;
    struct node *next;

    node(int x){
        data=x;
        next=NULL;
    }
}

node* getTail(node *head){
    node *temp=head;
    while(temp!=nullptr && temp->next!=nullptr){
        temp=temp->next;
    }
    return temp;
}

node* partition(node *head, node *tail){
    node *pivot=head;
    node *curr=head->next, *prev=head;
    
    while(curr!=tail->next){
        if(pivot->data > curr->data){
            swap(prev->next->data,curr->data);
            prev=prev->next;
        }
    
    curr = curr->next;
}
swap(prev->data,pivot->data);
return prev;
}

void solveSort(node *head, node *tail){
  if(head==nullptr || tail == nullptr ||head==tail){
    return;
  }  
  node *pivot=partition(head,tail);
  solveSort(head,pivot);
  solveSort(pivot->next,tail);
}
void quicksort(struct node **headRef){
    node *head=*headRef;
    if(head==nullptr || head->next==nullptr){
        return;
    }
node *tail = getTail(head);
solvesort(head,tail);
}
