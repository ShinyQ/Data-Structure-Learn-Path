#include "header_1301194024.h"

void createList(listGanda &L){
    first(L) = NULL;
    last(L) = NULL;
}

void createListSirkuler(listSirkuler &L){
    first(L) = NULL;
}

void insertLast(listGanda &L, int newNilai){
    adrGanda P = new elmtGanda;
    P->nilai = newNilai;
    next(P) = NULL;
    prev(P) = NULL;

    if(first(L) == NULL){
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void sort(listGanda &L){
    adrGanda temp = first(L);
    while (temp) {
        adrGanda min = temp;
        adrGanda r = next(temp);

        while (r) {
            if (min->nilai > r->nilai)
                min = r;

            r = next(r);
        }

        int x = temp->nilai;
        temp->nilai = min->nilai;
        min->nilai = x;
        temp = next(temp);
    }
}

void irisanList(listGanda L1, listGanda L2, listSirkuler &L3){
    adrGanda Q = first(L1);
    adrGanda P = first(L2);

    while(Q != NULL){
        if(Q->nilai == P->nilai){
            insertFirst(L3,Q->nilai);
            if(next(Q) != NULL){
                while(next(Q)->nilai == Q->nilai && next(Q) != NULL){
                    Q = next(Q);
                }
            }

            Q = next(Q);
            P = first(L2);
        }else{
            if (next(P) == NULL){
                Q = next(Q);
                P = first(L2);
            } else {
              P = next(P);
            }
        }

    }
}

void insertFirst(listSirkuler &L, int newNilai){
    adrSirkuler P = new elmtSirkuler;
    P->nilai = newNilai;
    next(P) = NULL;

    if(first(L) == NULL){
        first(L) = P;
        next(P) = P;
    } else {
        if(next(first(L))==  first(L)){
          next(first(L)) = P;
          next(P) = first(L);
          first(L) = P;
        } else {
          adrSirkuler Q = first(L);
          while(next(Q) != first(L)){
            Q = next(Q);
          }
          next(Q) = P;
          next(P) = first(L);
          first(L) = P;
        }
    }
}

void print(listGanda L){
    adrGanda Q = first(L);
    while(Q !=NULL){
        cout << Q->nilai << ", ";
        Q = next(Q);
    }
}

void printSirkuler(listSirkuler L){
    adrSirkuler Q = first(L);
    while(next(Q) != first(L)){
        cout << Q->nilai << ", ";
        Q = next(Q);
    }
    cout << Q->nilai << ", ";
}
