/*
    Nama : Kurniadi Ahmad Wijaya
    NIM : 1301194024
*/
#include "doublelinkedlist.h"

int main()
{
    List L, L1, L2, L3;
    address P;
    infotype x;
    createList(L);

    cout << "Insert First (10, 20)" << endl;
    x = 10;
    createNewElmt(x, P);
    insertFirst(L, P);
    x = 20;
    createNewElmt(x, P);
    insertFirst(L, P);
    show(L);

    cout << endl << endl << "Insert Last (30, 40, 50)" << endl;
    x = 30;
    createNewElmt(x, P);
    insertLast(L, P);
    x = 40;
    createNewElmt(x, P);
    insertLast(L, P);
    x = 50;
    createNewElmt(x, P);
    insertLast(L, P);
    show(L);

    cout << endl << endl << "Insert After 10 (60)" << endl;
    address Q = searchElm(L, 10);
    x = 60;
    createNewElmt(x, P);
    insertAfter(L, Q, P);
    show(L);

    cout << endl << endl << "Delete First" << endl;
    deleteFirst(L, P);
    show(L);

    cout << endl << endl << "Delete Last" << endl;
    deleteLast(L, P);
    show(L);

    cout << endl << endl << "Delete After (60)" << endl;
    address A = searchElm(L, 60);
    deleteAfter(L, A, P);
    show(L);

    cout << endl << endl;

    createList(L1);
    x = 0;
    for(int i=0; i<4; i++){
        x = x + 2;
        createNewElmt(x, P);
        insertFirst(L1, P);
    }
    cout << "List L1 :" << endl;
    show(L1);

    cout << endl << endl;

    createList(L2);
    x = 0;
    for(int i=0; i<5; i++){
        x = x + 1;
        createNewElmt(x, P);
        insertFirst(L2, P);
    }
    cout << "List L2 :" << endl;
    show(L2);

    cout << endl << endl;
    createList(L3);
    concat(L1, L2, L3);
    cout << "List L3 :" << endl;
    show(L3);

    cout << endl << endl;
    cout << "Median L3 : " << median(L3);

    cout << endl;
}
