#include "header_1301194024.h"

void createQueue(Queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

address newElm(address P, string data){
    P = new elmqueue;
    info(P) = data;
    next(P) = NULL;
    return P;
}

void enqueue(Queue &Q, string data){
    address P = newElm(P, data);
    if(head(Q) == NULL){
        head(Q) = P;
        tail(Q) = P;
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void dequeue(Queue &Q){
    if(head(Q) == NULL){
        head(Q) = NULL;
        tail(Q) = NULL;
    } else {
        address P = head(Q);
        head(Q) = next(P);
        next(P) = NULL;
    }
}

void printQueue(Queue Q){
    if(head(Q) != NULL){
        address P = head(Q);
        while(P != NULL){
            cout << info(P) << endl;
            P = next(P);
        }
    }else{
        cout << "Tidak ada transaksi!\n";
    }
}
