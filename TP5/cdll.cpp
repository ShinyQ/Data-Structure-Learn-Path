#include "cdll.h"

bool isEmpty(List L){
    return first(L) == NULL;
}

void createList(List &L){
    first(L) = NULL;
}

void createNewElmt(infotype X, address &P){
    P = new elmlist;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
}

void insertFirst(List &L, address P){
    if(isEmpty(L)){
        first(L) = P;
        next(P) = P;
        prev(P) = P;
    } else {
        next(P) = first(L);
        prev(P) = prev(first(L));
        prev(first(L)) = P;
        next(prev(P)) = P;
        first(L) = P;
    }
}

void insertAfter(address Prec, address P){
    next(P) = next(Prec);
    prev(next(P)) = P;
    next(Prec) = P;
    prev(P) = Prec;
}

void deleteFirst(List &L, address &P){
    if(isEmpty(L)){
        cout << "List Kosong";
    } else if(next(first(L)) == first(L)){
        P = first(L);
        next(P) = NULL;
        prev(P) = NULL;
        first(L) = NULL;
    } else {
        P = first(L);
        prev(next(P)) = prev(P);
        prev(P) = NULL;
        first(L) = next(P);
        P = NULL;
        next(prev(first(L))) = first(L);
    }
}

void deleteAfter(address Prec, address &P){
      P = next(Prec);
      next(Prec) = next(P);
      prev(next(P)) = Prec;
      next(P) = NULL;
      prev(P) = NULL;
}

int countWord(char data[], List L){
    int length = string(data).length();
    int Count;
    int dihitung = 0;
    address Q;
    address P = first(L);
    do{
        Q = P;
        Count = 0;
        for (int i = 0; i < length; i++){
            if(data[i] == info(Q)){
                Count++;
            }
            if(length == Count){
                dihitung++;
            }
            Q = next(Q);
        }
        P = next(P);
    } while(P != first(L));

    return dihitung;
}

void printInfo(List L){
    address Q = first(L);
    address K = Q;
    if(isEmpty(L)){
        cout << "List Kosong";
    } else if(next(Q) == first(L)){
        cout << info(Q);
    } else {
        while(next(Q) != K){
            cout << info(Q) << ", ";
            Q = next(Q);
        }
        cout << info(Q);
    }

}
