/* Nama : Kurniadi Ahmad Wijaya
   NIM : 1301194024
*/
#include "cdll.h"
using namespace std;
int main()
{
    List L;
    address P, PrecT, PrecC, PrecLast;
    infotype x;
    createList(L);

    x = 'a';
    createNewElmt(x, P);
    insertFirst(L, P);
    printInfo(L);

    x = 't';
    createNewElmt(x, P);
    insertFirst(L, P);
    PrecC = P;
    cout << endl;
    printInfo(L);

    PrecT = next(P);
    x = 't';
    createNewElmt(x, P);
    insertAfter(PrecT, P);
    PrecLast = P;
    cout << endl;
    printInfo(L);

    x = 'c';
    createNewElmt(x, P);
    insertAfter(PrecC, P);
    cout << endl;
    printInfo(L);

    x = 'a';
    createNewElmt(x, P);
    insertAfter(PrecLast, P);
    PrecLast = P;
    cout << endl;
    printInfo(L);

    x = 's';
    createNewElmt(x, P);
    insertAfter(PrecLast, P);
    PrecLast = P;
    cout << endl;
    printInfo(L);

    x = 'c';
    createNewElmt(x, P);
    insertAfter(PrecLast, P);
    PrecLast = P;
    cout << endl;
    printInfo(L);

    x = 'a';
    createNewElmt(x, P);
    insertAfter(PrecLast, P);
    cout << endl;
    printInfo(L);

    char data[] = "cat";
    cout << endl << countWord(data, L);
}
