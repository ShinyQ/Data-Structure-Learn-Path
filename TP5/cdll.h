/* Nama : Kurniadi Ahmad Wijaya
   NIM : 1301194024
*/
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;
typedef char infotype;
typedef struct elmlist *address;

struct List{
    address first;
};

struct elmlist {
    infotype info;
    address next;
    address prev;
};

bool isEmpty(List L);
address findLast(List L);
void createList(List &L);
void createNewElmt(infotype X, address &P);
void insertFirst(List &L, address P);
void insertAfter(address Prec, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(address Prec, address &P);
int countWord(char data[], List L);
void printInfo(List L);
