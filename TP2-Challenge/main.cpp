/*
    Nama : Kurniadi Ahmad Wijaya
    NIM : 1301194024
*/
#include "list.h"

int main()
{
    List L;
    address P, alloc;
    infotype x;
    createList(L);

//    cout << "Masukkan Angka Pertama : ";
//    cin >> x;
//    alloc = allocate(x);
//    insertFirst(L, alloc);

//    cout << "Hasil Inputan : ";
//    printInfo(L);
//
//    cout <<  endl << "Masukkan Angka Kedua : ";
//    cin >> x;
//    alloc = allocate(x);
//    insertFirst(L, alloc);
//
//    cout << "Hasil Inputan : ";
//    printInfo(L);
//
//    cout <<  endl << "Masukkan Angka Ketiga : ";
//    cin >> x;
//    alloc = allocate(x);
//    insertFirst(L, alloc);
//
//    cout << "Hasil Inputan : ";
//    printInfo(L);
//
//    deleteFirst(L, P);
//    cout << endl << "Hasil Setelah Delete First : ";
//    printInfo(L);

    for(int i = 1; i<=10; i++){
        cout << "Masukkan Angka Ke " << i <<" : ";
        cin >> x;
        alloc = allocate(x);
        if(i == 1){
            insertFirst(L, alloc);
        }else {
            insertLast(L, alloc);
        }
    }

    int searchValue = getValue(L, 0);
    cout <<  endl << "Value Ditemukan Pada Digit Ke -"<< searchValue << endl;
    cout << "NIM Anda : ";
    printInfo(L);
    //  deleteLast(L);

    return 0;
}
