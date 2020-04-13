
#include "header_1301194024.h"

void createGraph(Graph &G)
{
    G = NULL;
}

addressNode createNode(infotypeNode newInfo)
{
    addressNode P;
    P = new Node;
    info(P) = newInfo;
    next(P) = NULL;
    firstNeighbour(P) = NULL;

    return P;
}

addressNeighbour createNeighbour(infotypeNode newInfo)
{
    addressNeighbour P;
    P = new Neighbour;
    info(P) = newInfo;
    next(P) = NULL;

    return P;
}

void insertLastNeighbour(addressNeighbour P, addressNode pNode)
{
    addressNeighbour Q;
    if (firstNeighbour(pNode) == NULL) {
        firstNeighbour(pNode) = P;
    }
    else {
        Q = firstNeighbour(pNode);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertFirstNode(infotypeNode info, Graph &G)
{
    addressNode P = createNode(info);
    if(G == NULL){
        G = P;
    } else{
        next(P) = G;
        G = P;
    }
}

void deleteFirstNeighbour(addressNode pNode, addressNeighbour &P)
{
    P = firstNeighbour(pNode);
    firstNeighbour(pNode) = next(P);
    next(P) = NULL;
}

void deleteAfterNeighbour(addressNeighbour Prec, addressNeighbour &P)
{
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

addressNode findNode(infotypeNode infoSearch, Graph G)
{
    bool isFound = false;
    addressNode P = G;
    while (!isFound && P != NULL) {
        isFound = info(P) == infoSearch;
        if (!isFound) {
            P = next(P);
        }
    }
    return (isFound ? P : NULL);
}

void connect(infotypeNode node1, infotypeNode node2, Graph G)
{
    addressNode P1 = findNode(node1, G);
    addressNode P2 = findNode(node2, G);

    if (P1 != NULL && P2 != NULL) {
        addressNeighbour PN1 = createNeighbour(node2);
        addressNeighbour PN2 = createNeighbour(node1);
        insertLastNeighbour(PN1, P1);
        insertLastNeighbour(PN2, P2);
    }
}
addressNeighbour searchNeighbour(infotypeNode infoSearch, addressNode pN)
{
    addressNeighbour P = firstNeighbour(pN);
    bool isFound = false;
    while (!isFound && P != NULL) {
        isFound = info(P) == infoSearch;
        if (!isFound)
        {
            P = next(P);
        }
    }

    return (isFound ? P : NULL);
}

addressNeighbour searchBeforeNeighbour(infotypeNode infoSearch, addressNode pN)
{
    addressNeighbour P = firstNeighbour(pN);
    bool isFound = false;
    while (!isFound && P != NULL) {
        isFound = info(next(P)) == infoSearch;
        if (!isFound)
        {
            P = next(P);
        }
    }

    return (isFound ? P : NULL);
}

void disconnect(addressNode node1, addressNode node2, Graph G)
{
    addressNeighbour P1;
    addressNeighbour P2;

    if (info(node2) == info(firstNeighbour(node1))){
        deleteFirstNeighbour(node1, P1);
    } else{
        addressNeighbour Prec1 = searchBeforeNeighbour(info(node2), node1);
        deleteAfterNeighbour(Prec1, P1);
    }

    if (info(node1) == info(firstNeighbour(node2))) {
        deleteFirstNeighbour(node2, P1);
    } else {
        addressNeighbour Prec2 = searchBeforeNeighbour(info(node1), node2);
        deleteAfterNeighbour(Prec2, P2);
    }
}

void printGraph(Graph G){
    addressNode P = G;

    if (G != NULL)
    {
        while (P != NULL)
        {
            cout << "Node " << info(P) << ": ";
            addressNeighbour Q = firstNeighbour(P);
            if (Q == NULL)
            {
                cout << "NULL; ";
            }
            else
            {
                while (Q != NULL)
                {
                    cout << info(Q) << (next(Q) == NULL ? "; " : ", ");
                    Q = next(Q);
                }
            }
            P = next(P);
        }
        cout << endl;
    }
    else
    {
        cout << "Graph Kosong" << endl;
    }
}
