#include "SLL.h"

int main()
{
    string input;
    List L;
    address P, alloc;
    infotype x;
    createList(L);
    for(int i = 1; i<=5; i++){
        cout << "Masukkan angka ke-" << i << " : ";
        cin >> x;
        alloc = allocate(x);
        insertLast(L, alloc);
    }
    cout << "Isi list saat ini adalah : " << endl;
    show(L);

    cout << endl <<endl << "Masukkan data yang dicari : ";
    cin >> x;
    address data = findInfo(L, x);
    if(data != NULL){
            cout << "DATA DITEMUKAN PADA ALAMAT " << data;
    } else {
            cout << "MAAF DATA TIDAK DITEMUKAN";
    }

    cout << endl <<endl;
    cout << "Kondisi awal : ";
    show(L);
    cout << endl;

    while(first(L) != NULL){
        cout << "Lokasi elemen yang dihapus(depan/belakang) ? ";
        cin >> input;
        if(input == "depan"){
            deleteFirst(L,P);
        } else {
            deleteLast(L,P);
        }
        cout << "Kondisi Setelah Dihapus : ";
        if (first(L) == NULL){
            cout << "List Kosong";
        } else {
            show(L);
            cout << endl;
        }
        cout << endl;
    }
    cout << endl << "SELESAI";
    return 0;
}
