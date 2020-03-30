#include "header_1301194024.h"

int main() {
     Queue Q;
     Stack S;
     infotype X, Y;
     CreateQueue(Q);
     CreateStack(S);
     cout << "Mulai Proses Queue" << endl;
     enqueue(Q, "A", 4); printInfoQueue(Q);
     enqueue(Q, "B", 3); printInfoQueue(Q);
     enqueue(Q, "C", 5); printInfoQueue(Q);
     enqueue(Q, "D", 7); printInfoQueue(Q);
     enqueue(Q, "E", 5); printInfoQueue(Q);
     enqueue(Q, "F", 2); printInfoQueue(Q);
     enqueue(Q, "G", 1); printInfoQueue(Q);
     enqueue(Q, "H", 6); printInfoQueue(Q);
     enqueue(Q, "I", 4); printInfoQueue(Q);
     enqueue(Q, "J", 6); printInfoQueue(Q);
     cout<< "\nMulai Proses Dequeue dan Push" << endl;
     while (!isEmptyQueue(Q)) {
         X = dequeue(Q);
         if (X.galon > 3) {
             X.galon -= 3;
             Y.nama = X.nama;
             Y.galon = 3;
             push(S, Y);
             enqueue(Q, X.nama, X.galon);
         }
         else {
            push(S, X);
         }
         printInfoQueue(Q); printInfoStack(S);
     }
     cout<< "\nMulai Proses Reverse Stack" << endl;
     reverseStack(S);
     printInfoStack(S);
     return 0;
}
