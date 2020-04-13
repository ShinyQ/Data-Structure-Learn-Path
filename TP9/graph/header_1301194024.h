#include <iostream>

#define info(P) (P)->info
#define next(P) (P)->next
#define firstNeighbour(P) (P)->firstNeighbour

using namespace std;

typedef int infotypeNode;
typedef struct Node *addressNode;
typedef struct Neighbour *addressNeighbour;

struct Node{
    infotypeNode info;
    addressNode next;
    addressNeighbour firstNeighbour;
};

struct Neighbour{
    infotypeNode info;
    addressNeighbour next;
};

typedef addressNode Graph;

void createGraph(Graph &G);
addressNode createNode(infotypeNode newInfo);
addressNeighbour createNeighbour(infotypeNode newInfo);
void insertLastNeighbour(addressNeighbour P, addressNode pNode);
void deleteFirstNeighbour(addressNode pNode, addressNeighbour &P);
void deleteAfterNeighbour(addressNeighbour Prec, addressNeighbour &P);
void insertFirstNode(infotypeNode info, Graph &G);
addressNode findNode(infotypeNode infoSearch, Graph G);
void connect(infotypeNode node1, infotypeNode node2, Graph G);
addressNeighbour searchNeighbour(infotypeNode infoSearch, addressNode pN);
void disconnect(addressNode node1, addressNode node2, Graph G);
void printGraph(Graph G);
