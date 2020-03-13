#include "stack.h"
using namespace std;
int main()
{
    Stack S, S2;
    address P;
    string nama, nim;
    createList(S);
    createList(S2);

    nama = "Kurniadi";
    nim = "1301194024";
    createNewElmt(P, nama, nim);
    push(S, P);

    pop(S);
    push(S2, P);

    nama = "Aang";
    nim = "1301194276";
    createNewElmt(P, nama, nim);
    push(S, P);

    pop(S);
    push(S2, P);

    nama = "Nopal";
    nim = "1301194073";
    createNewElmt(P, nama, nim);
    push(S, P);

    nama = "Kurniadi_2";
    nim = "1301194024";
    createNewElmt(P, nama, nim);
    push(S, P);

    cout << "Isi List Stack 1 : "<< endl << endl;
    printInfo(S);
    cout << endl << "Isi List Stack 2 : "<< endl << endl;
    printInfo(S2);

    concat(S,S2);
    cout << endl << "Isi List Stack Concat : "<< endl << endl;
    printInfo(S);
}
