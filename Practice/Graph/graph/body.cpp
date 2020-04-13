#include "head.h"

void createGraph(Graph &G){
    Start(G) = NULL;
}

adrNode alokasiNode(InfoTypeNode infoNode){
    adrNode P = new elmtNode;
    infoNode(P) = infoNode;
    firstEdge(P) = NULL;
    nextNode(P) = NULL;
    return P;
}

adrEdge alokasiEdge(InfoTypeEdge infoEdge){
    adrEdge P = new elmtEdge;
    infoEdge(P) = infoEdge;
    nextEdge(P) = NULL;
    return P;
}

void addNewNode(Graph &G, adrNode P){
    adrNode Q;
    if(Start(G) == NULL){
        Start(G) = P;
    } else {
        Q = Start(G);
        while(nextNode(Q) != NULL){
            Q = nextNode(Q);
        }
        nextNode(Q) = P;
    }
}

adrNode findNode(Graph G, InfoTypeNode data){
    adrNode P, Q;
    if(Start(G) == NULL){
        cout << "Graf Kosong";
    } else {
        P = Start(G);
        while(infoNode(P) != data && nextNode(P) != NULL){
            Q = nextNode(Q);
        }
        if(infoNode(P) == data){
            cout << "True";
            return P;
        } else {
            cout << "Node Tidak Ditemukan";
        }
    }
}

void insertLastEdge(Graph &G, adrNode PNode, adrEdge PEdge){
    adrEdge P;
    if(PNode == NULL){
        cout << "Node Tidak Ditemukan";
    } else if (firstEdge(PNode) == NULL) {
        firstEdge(PNode) = PEdge;
    } else {
        P = firstEdge(PNode);
        while(nextEdge(P) != NULL){
            P = nextEdge(P);
        }
        nextEdge(P) = PEdge;
    }
}

void connecting(Graph &G, string node1, string node2){
    adrEdge E1, E2;
    adrNode P1, P2;

    P1 = findNode(G,node1);
    P2 = findNode(G,node2);
    if(P1 != NULL && P2 != NULL){
        E1 = alokasiEdge(node2);
        insertLastEdge(G, P1, E1);

        E2 = alokasiEdge(node1);
        insertLastEdge(G, P2, E2);
    } else {
        cout << "Node Tidak Ditemukan";
    }
}

void printNode(Graph G){
    if(Start(G) != NULL){
        adrNode N = Start(G);
        while(N != NULL){
            cout << infoNode(N) << " = ";
            adrEdge E = firstEdge(N);
            while(E != NULL){
                cout << infoEdge(E) << ", ";
                E = nextEdge(E);
            }
            cout << endl;
            N = nextNode(N);
        }
    } else {
        cout << "Graf Kosong";
    }
}
