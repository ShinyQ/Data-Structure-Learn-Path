#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev

using namespace std;
typedef struct elmtSirkuler *adrSirkuler;
typedef struct elmtGanda *adrGanda;

struct listGanda{
    adrGanda first;
    adrGanda last;
};

struct elmtGanda {
    int nilai;
    adrGanda next;
    adrGanda prev;
};

struct listSirkuler{
    adrSirkuler first;
};

struct elmtSirkuler {
    int nilai;
    adrSirkuler next;
};

void createList(listGanda &L);
void insertLast(listGanda &L, int newNilai);
void sort(listGanda &L);
void print(listGanda L);

void createListSirkuler(listSirkuler &L);
void irisanList(listGanda L1, listGanda L2, listSirkuler &L3);
void insertFirst(listSirkuler &L, int newNilai);
void printSirkuler(listSirkuler L);
