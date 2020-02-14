/*
    Nama : Kurniadi Ahmad Wijaya
    NIM : 1301194024
*/

#include "doublelinkedlist.h"

bool isEmpty(List L){
    return first(L) == NULL;
}

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

void createNewElmt(infotype x, address &P){
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
}

address searchElm(List L, int data){
    address Q = first(L);
    bool found;
    while(Q != NULL && !found){
        if(info(Q) == data){
            found = true;
        } else {
            Q = next(Q);
        }
    }
    return Q;
}

void insertFirst(List &L, address P){
    if(isEmpty(L)){
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertAfter(List &L, address &Prec, address &P){
    if(isEmpty(L)){
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}

void insertLast(List &L, address &P){
    if(isEmpty(L)){
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}

void deleteFirst(List &L, address &P){
    if(isEmpty(L)){
        cout << "List Is Empty" << endl;
    } else {
        P = first(L);
        first(L) = next(first(L));
        next(P) = NULL;
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}

void deleteLast(List &L, address &P){
    if(isEmpty(L)){
        cout << "List Is Empty" << endl;
    } else {
        P = last(L);
        last(L) = prev(last(L));
        prev(P) = NULL;
        next(last(L)) = NULL;
    }
}

void deleteAfter(List &L, address Prec, address &P){
    if(next(Prec) == last(L)){
        deleteLast(L, P);
    }else if(!isEmpty(L)){
        P = next(Prec);
        address Q = next(next(Prec));
        prev(Q) = Prec;
        next(Prec) = Q;
        next(P) = NULL;
        prev(P) = NULL;
    }else {
        cout << "No Data After Prec" << endl << endl;
    }
}

void concat(List L1, List L2, List &L3){
    next(last(L1)) = first(L2);
    prev(first(L2)) = last(L1);

    first(L3) = first(L1);
    last(L3) = first(L1);
}

float median(List L){
    int i = 0;
    int mid = 0;
    float data;
    bool found;

    address Q = first(L);
    while(Q != NULL){
        i++;
        Q = next(Q);
    }

    address P = first(L);
    mid = i/2;

    for(int j=0; j<mid; j++){
        P = next(P);
    }

    if (i % 2 == 0){
        data = (info(P) + info(prev(P))) / 2.0;
    } else {
        data = info(P);
    }

    return data;
}

void show(List L){
    address Q = first(L);
    while(Q != NULL){
        cout << info(Q) << ", ";
        Q = next(Q);
    }
}
