/*
    Nama : Kurniadi Ahmad Wijaya
    NIM : 1301194024
*/

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
using namespace std;

struct buku {
    string ID, judul, pengarang, penerbit;
    int Tahun;
};

typedef buku infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct list {
    address first;
    address last;
};

void buatList(list &L);
bool listKosong(list L);
address cariElemen(list L, string X);
void buatElemen(address &P, string ID,string judul,string pengarang,string penerbit,int tahun);
void tambahDataTerakhir(list &L, address P);
void tambahDataSetelah(list &L, address Prec, address P);
void hapusDataTerakhir(list &L, address &P);
void lihatList(list L);
int jumBuku(list &L, int thn);
