#include "header_1301194024.h"

int main()
{
    Queue Q;

    createQueue(Q);
    enqueue(Q, "Andi Transfer Doni 50.000");
    enqueue(Q, "Doni Transfer Saras 10.000");
    printQueue(Q);
    cout << endl;

    enqueue(Q, "Tono Transfer Billi 20.000");
    printQueue(Q);
    cout << endl;

    dequeue(Q);
    printQueue(Q);
    return 0;
}
