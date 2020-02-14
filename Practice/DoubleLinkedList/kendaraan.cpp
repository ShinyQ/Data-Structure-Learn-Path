#include "header.h"

void createList(List &L){

}

address allocate(infotype x){
    address P = new elmlist;
    info(P) = x;

    next(P) = NULL;
    prev(P) = NULL;

    return P;
}
void deallocate(address &P){

}

void show(List &L){
    address P = first(L);
    while(next(P)!= NULL){
        cout << info(P) << endl;
        P = next(P);
    }
}

void insertLast(List &L, address P){

}

