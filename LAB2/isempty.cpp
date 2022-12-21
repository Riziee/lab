#include "llstack.h"
List::List(){
    int data;
top=NULL;

boolisempty(){
    if(top==NULL)
    return true;
    else
    return false;
}

