#include <iostream>
#define Start(G) G.Start
#define firstEdge(P) P->firstEdge
#define nextNode(P) P->nextNode
#define nextEdge(P) P->nextEdge
#define infoNode(P) P->infoNode
#define infoEdge(P) P->infoEdge

using namespace std;

typedef string InfoTypeNode;
typedef string InfoTypeEdge;

typedef struct elmtNode *adrNode;
typedef struct elmtEdge *adrEdge;

struct elmtNode{
    InfoTypeNode infoNode;
    adrNode nextNode;
    adrEdge firstEdge;
};

struct elmtEdge{
    InfoTypeEdge infoEdge;
    adrEdge nextEdge;
};

struct Graph{
    adrNode Start;
};

void createGraph(Graph &G);
adrNode alokasiNode(InfoTypeNode infoNode);
adrEdge alokasiEdge(InfoTypeEdge infoEdge);
void addNewNode(Graph &G, adrNode P);
adrNode findNode(Graph G, InfoTypeNode data);
void insertLastEdge(Graph &G, adrNode PNode, adrEdge PEdge);
void connecting(Graph &G, string node1, string node2);
void printNode(Graph G);
