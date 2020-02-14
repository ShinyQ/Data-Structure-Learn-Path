#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct kendaraan{
    string nopol;
    string warna;
    int thnBuat;
};

struct List{
    address first;
    address last;
};

void createList(List &L);
address allocate(infotype x);
void deallocate(address &P);
void show(List &L);
void insertLast(List &L, address P);

