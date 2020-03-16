#include "stack.h"

void pop(Stack &S){

    address P = top(S);
    if(isEmpty(S)){
        cout << endl << "List Kosong" << endl;
    } else if (next(P) == NULL) {
        top(S) = NULL;
    } else {
        P = top(S);
        top(S) = next(P);
        next(P) = NULL;
    }
}

void push(Stack &S, address P){
    if(isEmpty(S)){
        top(S) = P;
    } else {
        next(P) = top(S);
        top(S) = P;
    }
}

bool isEmpty(Stack S){
    return top(S) == NULL;
}

void createList(Stack &S){
    top(S) = NULL;
}

void createNewElmt(address &P, string nama, string nim){
    P = new elmstack;
    info(P).nama = nama;
    info(P).nim = nim;
    next(P) = NULL;
}

void printInfo(Stack S){
    address Q = top(S);
    while (Q != NULL){
        cout << info(Q).nama << endl;
        cout << info(Q).nim << endl<< endl;
        Q = next(Q);
    }
}

void concat(Stack &S, Stack S2){
    address Q = top(S2);
    push(S, Q);x
}
