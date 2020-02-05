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

struct List{
    address first;
};

void createList(List &L);
address allocate(infotype x);
void insertFirst(List &L, address &P);
void insertLast(List &L, address &P);
void insertAfter(List &L, address &P, address Prec);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address &P);
void show(List &L);
address findInfo(List &L, infotype data);

