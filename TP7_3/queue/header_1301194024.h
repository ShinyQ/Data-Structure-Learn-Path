#include <iostream>
#define head(L) Q.head
#define tail(L) Q.tail
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef struct elmqueue *address;
typedef string infotype;

struct Queue{
    address head;
    address tail;
};

struct elmqueue {
    infotype info;
    address next;
};

void createQueue(Queue &Q);
address newElm(Queue &Q);
void enqueue(Queue &Q, string data);
void dequeue(Queue &S);
void printQueue(Queue S);
