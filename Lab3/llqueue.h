#include <iostream>
using namespace std ;

struct Node{
    int data;
    struct Node *next;

}
class List{
    public:
    List();
    ~List();
    bool isEmpty();
    bool isFull();
    void enqueue(element);
    void dequeue();
    void front();
    void back();
    private:
    Node *Head;
    Node *Tail;
};
