#include <iostream>
#define Top(S) (S).Top
#define info(S)(S).info

using namespace std;
typedef int infotype;

struct Stack{
    infotype info[10];
    int Top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
int pop(Stack &S);
void printInfo(Stack S);
