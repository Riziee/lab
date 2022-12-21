#include <iostream>

class Node{
    public:
    int info;
    Node *next;
};

class List{
    public:
    List();
    ~List();
    bool isEmpty();
    void addTohead(int data);
    void addToTail(int data,Node *next);
    void add(int data, Node *predecessor);
    void removeFromHead();
    void removeFromTail();
    void remove(int data);
    bool search (int data);
    bool retrieve(int data,Node *dataOutPtr);
    void traverse();
    private:
    Node *Head;
    Node *Tail;

};