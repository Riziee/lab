#include "llqueue.h"
List::List(){
    int data;
    Head=nullptr;
    Tail=nullptr;
}
void List::front(){
  if(isempty())
  cout<<"Queue is Empty";  
  else 
  cout<<Head->data;

}
void List::back(){
    if(isempty())
    cout<<"Queue is Empty";
    else
    cout<<Tail->data;
}