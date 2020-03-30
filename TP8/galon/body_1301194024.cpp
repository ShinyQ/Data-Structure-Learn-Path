#include "header_1301194024.h"

void CreateQueue(Queue &Q)
{
    Q.Head = -1;
    Q.Tail = -1;
}
bool isEmptyQueue(Queue Q)
{
    return Q.Tail == -1;
}
bool isFullQueue(Queue Q)
{
    return Q.Tail > 10;
}

void enqueue(Queue &Q, string nama, int galon){
    if(!isFullQueue(Q)){
        Q.Head = 0;
        Q.info[Q.Tail + 1].nama = nama;
        Q.info[Q.Tail + 1].galon = galon;
        Q.Tail++;
    }
}

infotype dequeue(Queue &Q){
    infotype X = Q.info[Q.Head];
    int i = 0;
    while (i<Q.Tail){
        Q.info[i] = Q.info[i+1];
        i++;
    }
    Q.Tail--;
    return X;
}

void printInfoQueue(Queue Q){
    if (!isEmptyQueue(Q)){
        int i = 0;
        cout << "Queue " << "[Head : " << Q.Head << " Tail: " << Q.Tail << "] ";
        while (i <= Q.Tail){
            cout << Q.info[i].nama << "(" << Q.info[i].galon << ") " ;

            i++;
        }
        cout << endl;
    } else {
        cout << "Queue " << "[Head : " << Q.Head-1 << " Tail: " << Q.Tail << "] " << " Kosong " << endl;
    }
}

void CreateStack(Stack &S){
    S.Top = -1;
}

bool isEmptyStack(Stack S){
    return S.Top == -1;
}

bool isFullStack(Stack S){
    return S.Top == 19;
}

void push(Stack &S, infotype X){
    if(!isFullStack(S)){
        S.Top++;
        S.info[S.Top] = X;
    }
}

infotype pop(Stack &S){
    infotype X = S.info[S.Top];
    S.Top--;
    return X;
}

void printInfoStack(Stack S){

    if(!isEmptyStack(S)){
        cout << "Stack [Top: " << S.Top << "] ";
        int i = 0;
        while (i <= S.Top) {
            cout << S.info[i].nama << "(" << S.info[i].galon << ") ";
            i++;
        }
        cout << endl;
    }
}

void reverseStack(Stack &S){
    infotype temp;
    int i = S.Top;
    int j = 0;
    while (i >= j)
    {
        temp = S.info[j];
        S.info[j] = S.info[i];
        S.info[i] = temp;
        i--;
        j++;
    }
}
