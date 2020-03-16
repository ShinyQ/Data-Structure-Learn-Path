#include <iostream>
#include "header_1301194024.h"

int main()
{
    listGanda L1,L2;
    listSirkuler L3;
    createList(L1);
    createList(L2);
    createListSirkuler(L3);

    cout << "List 1 : ";
    insertLast(L1, 49);
    insertLast(L1, 27);
    insertLast(L1, 12);
    insertLast(L1, 39);
    insertLast(L1, 22);
    print(L1);

    cout << endl << "List 2 : ";
    insertLast(L2, 39);
    insertLast(L2, 12);
    insertLast(L2, 15);
    print(L2);

//    Test Case Lain
//    cout << "List 1 : ";
//    insertLast(L1, 3);
//    insertLast(L1, 3);
//    insertLast(L1, 2);
//    insertLast(L1, 2);
//    insertLast(L1, 4);
//    print(L1);
//
//    cout << endl << "List 2 : ";
//    insertLast(L2, 2);
//    insertLast(L2, 2);
//    insertLast(L2, 4);
//    insertLast(L2, 3);
//    insertLast(L2, 3);
//    print(L2);

    cout << endl << endl << "Sorting List 1 : " << endl;
    sort(L1);
    print(L1);

    cout << endl << endl << "Sorting List 2 : " << endl;
    sort(L2);
    print(L2);

    cout << endl << endl << "Irisan List 1 dan List 2 : " << endl;
    irisanList(L1, L2, L3);
    printSirkuler(L3);

    cout << endl;
    return 0;
}
