#include "header_1301194024.h"

int main(){
    Graph G;
    createGraph(G);
    printGraph(G);

    insertFirstNode(17, G);
    insertFirstNode(18, G);
    insertFirstNode(19, G);
    insertFirstNode(20, G);
    printGraph(G);
    connect(17,18,G);
    printGraph(G);
    connect(17,19,G);
    connect(18,19,G);
    connect(18,20,G);
    printGraph(G);

    disconnect(findNode(18,G), findNode(20,G), G);
    printGraph(G);
    disconnect(findNode(18,G), findNode(19,G), G);
    printGraph(G);
    disconnect(findNode(18,G), findNode(17,G), G);
    printGraph(G);
    disconnect(findNode(19,G), findNode(17,G), G);
    printGraph(G);
}
