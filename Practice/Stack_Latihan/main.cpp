#include "stack.h"
using namespace std;
int main()
{
    Stack S;
    address P;
    string nama, nim;
    createList(S);

    nama = "Kurniadi";
    nim = "1301194024";
    createNewElmt(P, nama, nim);
    push(S, P);
    pop(S,P);

    nama = "Aang";
    nim = "1301194276";
    createNewElmt(P, nama, nim);
    push(S, P);
    pop(S,P);

    nama = "Nopal";
    nim = "1301194073";
    createNewElmt(P, nama, nim);
    push(S, P);

    nama = "Kurniadi";
    nim = "1301194024";
    createNewElmt(P, nama, nim);
    push(S, P);

    printInfo(S);
}
