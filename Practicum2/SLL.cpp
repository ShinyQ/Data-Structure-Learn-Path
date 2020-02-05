#include "SLL.h"

void createList(List &L){
    first(L) = NULL;
}

address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;
}

void insertFirst(List &L, address &P){
    next(P) = first(L);
    first(L) = P;
}

void insertAfter(List &L, address &P, address Prec){
    address Q = first(L);
    if(Q != NULL && Next(Q) != NULL){
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = P
    }else{
        insertFirst(L, P)
    }
}

void insertLast(List &L, address &P){
    address Q = first(L);
    if(Q == NULL){
        insertFirst(L, P);
    } else {
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void show(List &L){
    address p = first(L);
    while(p != NULL){
        cout << info(p) << " ";
        p = next(p);
    }
}

void deleteFirst(List &L, address &P){
    P = first(L);
    first(L) = next(first(L));
    next(P) = NULL;
}

void deleteAfter(List &L, address &P, address Prec){
    address Q = first(L);
    if(Q != NULL && Next(Q) != NULL){
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL
    }else{
        cout << "DELETE TIDAK VALID";
    }
}

void deleteLast(List &L, address &P){
    address Q = first(L);
    if(next(Q) == NULL){
        deleteFirst(L, P);
    } else {
        while(next(next(Q)) != NULL){
            Q = next(Q);
        }
        next(Q) = NULL;
    }
}

address findInfo(List &L, infotype data){
    bool found = false;
    address x = NULL;
    address Q = first(L);
    if (Q != NULL) {
        while(Q != NULL && !found){
        if(info(Q) == data) {
            found = true;
            x = Q;
        }
            Q = next(Q);
        }
    }

    return x;
}
