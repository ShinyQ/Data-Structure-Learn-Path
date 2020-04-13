#include "head.h"

int main()
{
    Graph G;
    createGraph(G);
    adrNode P, getNodeLoc;
    adrEdge Q;

    P = alokasiNode("Kurniadi");
    addNewNode(G, P);

    P = alokasiNode("Fadhil");
    addNewNode(G, P);

    P = alokasiNode("Iqbal");
    addNewNode(G, P);

    Q = alokasiEdge("Struktur Data");
    getNodeLoc = findNode(G, "Kurniadi");
    insertLastEdge(G, getNodeLoc, Q);


    Q = alokasiEdge("Model Bisnis Digital");
    getNodeLoc = findNode(G, "Kurniadi");
    insertLastEdge(G, getNodeLoc, Q);

//    Q = alokasiEdge("Kalkulus IIB");
//    getNodeLoc = findNode(G, "Fadhil");
//    insertLastEdge(G, getNodeLoc, Q);
    printNode(G);
}
