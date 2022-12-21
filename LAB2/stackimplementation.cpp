#include "llstack.h"
ist::List(){
    int data;
top=NULL;
}
void List::push(int value){
    Node *ptr=new Node();
    ptr->data=value;
    pte->link=top;
    top=ptr;



}
void List::pop(){
    if(isempty())
    cout<<"Stack is Empty";
    else{
        Node *ptr=top;
        top=top->link;
        delete(ptr);
    }
}
void List::top(){
    if(isempty())
    cout<<"Stack is Empty";
    else
    cout<<Element at top is:"<<top->data";

}
int main()
push(1);
push(2);
pop(2);
return 0;
}