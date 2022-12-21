#include <iostream>
using namespace std ;

struct Node{
    int data;
    struct Node *link;

}
class List{
    public:
    List();
    ~List();
    bool isEmpty();
    bool isFull();
    void top();
    void push(element);
    void pop();
    private:
    Node *Head;
    Node *Tail;
}
