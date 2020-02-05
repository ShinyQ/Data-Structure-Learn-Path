/*
    Nama : Kurniadi Ahmad Wijaya
    NIM : 1301194024
*/

#include "list.h"

void createList(List &L){
    first(L) = NULL;
}

address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List L){
    address p = first(L);
    while (p != NULL){
        cout << info(p);
        p = next(p);
    }
    cout << endl;
}

void insertLast(List &L, address &P){
    address Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    }
    next(Q) = P;
}
void deleteLast(List &L){
    address Q = first(L);
    while(next(next(Q)) != NULL){
        Q = next(Q);
    }
    next(Q) = NULL;
}

int getValue(List &L, int value){
    int i = 0;
    bool found = false;
    address Q = first(L);
    while(next(Q) != NULL && !found){
        if(info(Q) == value){
            found = true;
        }
        i++;
        Q = next(Q);
    }
    return i;
}

