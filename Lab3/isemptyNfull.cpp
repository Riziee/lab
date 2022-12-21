#include "llqueue.h"
List::List(){
    int data;
    Head=nullptr;
    Tail=nullptr;
}
bool List::isEmpty()
{

    if (Head == nullptr)
        return true;
    else
        return false;

}
