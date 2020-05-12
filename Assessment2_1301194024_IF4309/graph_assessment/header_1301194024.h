#include "iostream"
using namespace std;

#define info(P) (P)->info
#define nextEdge(P) (P)->nextEdge
#define nextNode(P) (P)->nextNode

typedef string infotypeNode;
typedef string infotypeEdge;

typedef struct elmtNode *adrNode;
typedef struct elmtEdge *adrEdge;

struct elmtNode{
    infotypeNode info;
    adrNode nextNode;
    adrEdge firstEdge;
};

struct elmtEdge {
    infotypeEdge info;
    string nama_ka;
    int tarif;
    adrEdge nextEdge;
};

struct Graph{
    adrNode start;
};

void createGraph (Graph &G);
adrNode alocateNode (infotypeNode info);
adrEdge alocateEdge (infotypeNode, int tarif, string nama_ka);
void addNewNode (Graph &G, adrNode N);
adrNode FindNode (Graph G, infotypeNode data);
void addLastEdge (Graph G, adrNode &N, adrEdge NA);
void connectingNode (Graph G, infotypeNode node1, infotypeNode node2, int tarif, string nama_ka);
void showNode (Graph G);
void showNodeEdge(Graph G);
void deleteEdge(Graph G, adrNode &N, adrEdge NA);
void disconnectingNode(Graph G, infotypeNode node1, infotypeNode node2);
void delNode(Graph &G, infotypeNode node1);
void cetaktarifRute (Graph G, infotypeNode node1, infotypeNode node2);
adrEdge FindEdge(Graph G, adrNode Pnode, infotypeEdge data);
