#include <iostream>
using namespace std;

struct infotype{
    string nama;
    int galon;
};

struct Queue{
    infotype info[10];
    int Head;
    int Tail;
};

struct Stack{
    infotype info[20];
    int Top;
};

void CreateQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, string nama, int galon);
infotype dequeue(Queue &Q);
void printInfoQueue(Queue Q);
void CreateStack(Stack &S);
bool isEmptyStack(Stack S);
bool isFullStack(Stack S);
void push(Stack &S, infotype X);
infotype pop(Stack &S);
void printInfoStack(Stack S);
void reverseStack(Stack &S);
