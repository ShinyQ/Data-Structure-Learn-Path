#include "library.h"

void buatList(list &L){
    first(L) = NULL;
    last(L) = NULL;
}

bool listKosong(list L){
    return first(L) == NULL && last(L) == NULL;
}

address cariElemen(list L, string X){
    bool found;
    address Q = first(L);
    address F = NULL;
    while (next(Q) != NULL && !found){
        if(info(Q).penerbit == X){
            found = true;
            F = Q;
        }
        Q = next(Q);
    }
    return F;
}

void buatElemen(address &P, string ID, string judul, string pengarang, string penerbit, int tahun){
    P = new elmlist;
    info(P).ID = ID;
    info(P).judul = judul;
    info(P).pengarang = pengarang;
    info(P).penerbit = penerbit;
    info(P).Tahun = tahun;
    next(P) = NULL;
}

void tambahDataTerakhir(list &L, address P){
    if (listKosong(L)){
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        last(L) = P;
    }
}

void tambahDataSetelah(list &L, address Prec, address P){
    if(Prec != NULL){
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void hapusDataTerakhir(list &L, address &P){
    P = first(L);
    address Q = NULL;
    if (listKosong(L)){
        first(L) = NULL;
        last(L) = NULL;
    }else {
        while (next(P) != NULL){
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
        last(L) = Q;
    }
}

void lihatList(list L){
    address Q = first(L);
    while (Q != NULL) {
        cout << info(Q).ID << " ";
        cout << info(Q).judul << " ";
        cout << info(Q).pengarang << " " << endl;
        Q = next(Q);
    }
}

int jumBuku(list &L, int thn){
    int i = 0;
    address Q = first(L);
    while (Q != NULL){
        if(info(Q).Tahun < thn){
            i++;
        }
        Q = next(Q);
    }
    return i;
}
