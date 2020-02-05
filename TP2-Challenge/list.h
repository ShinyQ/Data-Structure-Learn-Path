/*
    Nama : Kurniadi Ahmad Wijaya
    NIM : 1301194024
*/

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &l);
address allocate(infotype x);
void insertFirst(List &l, address P);
void printInfo(List L);
void deleteFirst(List &L, address &P);
void insertLast(List &L, address &P);
void deleteLast(List &L);
int getValue(List &L, int value);
