#include <iostream>
#define top(L) L.top
#define next(P) P->next
#define info(P) P->info

using namespace std;
struct infotype{
    string nama;
    string nim;
};

typedef struct elmstack *address;

struct Stack{
    address top;
};

struct elmstack {
    infotype info;
    address next;
};

void pop(Stack &S);
void push(Stack &S, address P);
bool isEmpty(Stack S);
void createList(Stack &S);
void createNewElmt(address &P, string nama, string nim);
void printInfo(Stack S);
void concat(Stack &S1, Stack S2);
