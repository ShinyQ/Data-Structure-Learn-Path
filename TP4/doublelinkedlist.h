/*
    Nama : Kurniadi Ahmad Wijaya
    NIM : 1301194024
*/
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct List{
    address first;
    address last;
};

struct elmlist {
    infotype info;
    address next;
    address prev;
};

bool isEmpty(List L);
address searchElm(List L, int data);
void createList(List &L);
void createNewElmt(infotype x, address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address &Prec, address &P);
void insertLast(List &L, address &P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
void concat(List L1, List L2, List &L3);
void show(List L);
float median(List L);
