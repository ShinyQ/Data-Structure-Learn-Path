#include "header_1301194024.h"

void createGraph (Graph &G){
    G.start = NULL;
}

adrNode alocateNode (infotypeNode info){
    adrNode P;
    P = new elmtNode;
    info(P) = info;
    nextNode(P) = NULL;
    P->firstEdge = NULL;
    return P;
}

adrEdge alocateEdge (infotypeNode info, int tarif, string nama_ka){
    adrEdge P;
    P = new elmtEdge;
    info(P) = info;
    P->nama_ka = nama_ka;
    P->tarif = tarif;
    nextEdge(P) = NULL;

    return P;
}

void addNewNode (Graph &G, adrNode N){
    adrNode Q = G.start;
    if(Q == NULL){
        G.start = N;
    }else{
        while(nextNode(Q) != NULL){
            Q = nextNode(Q);
        }
        nextNode(Q) = N;
    }
}

adrNode FindNode (Graph G, infotypeNode data){
    adrNode Q = G.start;
    bool found;
    while(Q != NULL && !found){
        if(info(Q) == data){
            found = true;
        } else {
            Q = nextNode(Q);
        }
    }
    return Q;
}

void addLastEdge (Graph G, adrNode &N, adrEdge NA){
    adrEdge Q;
    if(N == NULL){
        cout << "Node Tidak Ditemukan";
    } else if(N->firstEdge == NULL){
        N->firstEdge = NA;
    } else {
        Q = N->firstEdge;
        while(nextEdge(Q) != NULL){
            Q = nextEdge(Q);
        }
        nextEdge(Q) = NA;
    }
}

void connectingNode (Graph G, infotypeNode node1, infotypeNode node2, int tarif, string nama_ka){
    adrEdge E1, E2;
    adrNode P1, P2;

    P1 = FindNode(G, node1);
    P2 = FindNode(G, node2);

    if(P1 != NULL && P2 != NULL){
        E1 = alocateEdge(node2, tarif, nama_ka);
        addLastEdge(G, P1, E1);

        E2 = alocateEdge(node1, tarif, nama_ka);
        addLastEdge(G, P2, E2);
    }
}

void showNode (Graph G){
    adrNode Q = G.start;
    cout << "Node : ";
    while(Q != NULL){
        cout << info(Q) << ", ";
        Q = nextNode(Q);
    }
}

void showNodeEdge(Graph G){
    adrNode Q = G.start;
    while(Q != NULL){
        cout << endl << info(Q) << " menuju" << endl;
        adrEdge P = Q->firstEdge;
        while(P != NULL){
            cout << info(P) << ": " << "nama " << P->nama_ka << " dengan tarif " << P->tarif << endl ;
            P = nextEdge(P);
        }
        Q = nextNode(Q);
    }
}
adrEdge FindEdge(Graph G, adrNode Pnode, infotypeEdge data){
    adrEdge Q = Pnode->firstEdge;
    bool found;
    if(Q == NULL){
        cout << "Edge Kosong";
    } else {
        while(Q != NULL && !found){
            if(info(Q) == data){
                return Q;
            } else {
                Q = nextEdge(Q);
            }
        }
    }
    return NULL;
}

void deleteFirstEdge(Graph &G, adrNode Pnode, adrEdge &P){
    P = Pnode->firstEdge;
    Pnode->firstEdge = nextEdge(P);
    nextEdge(P) = NULL;
}

void deleteLastEdge(Graph &G, adrNode Pnode, adrEdge &P){
    adrEdge Q = Pnode->firstEdge;
    while(nextEdge(Q) != NULL){
        Q = nextEdge(Q);
    }
    P = nextEdge(Q);
    Q->nextEdge = NULL;
}

void deleteAfterEdge(Graph &G, adrNode Pnode, adrEdge Prec, adrEdge &P){
    P = nextEdge(Prec);
    nextEdge(Prec) = nextEdge(P);
    nextEdge(P) = NULL;
}

void deleteEdge(Graph G, adrNode &N, adrEdge NA){
    adrEdge Prec;
    if(NA == N->firstEdge){
        deleteFirstEdge(G, N, NA);
    } else if(nextEdge(NA) == NULL){
        deleteLastEdge(G, N, NA);
    } else {
        Prec = N->firstEdge;
        while(nextEdge(Prec) != NA){
            Prec = nextEdge(Prec);
        }
        deleteAfterEdge(G, N, Prec, NA);
    }
}

void disconnectingNode(Graph G, infotypeNode node1, infotypeNode node2){
    if(G.start != NULL){
        adrNode n1 = FindNode(G,node1);
        adrNode n2 = FindNode(G,node2);
        if(n1 != NULL && n2 != NULL){
            adrEdge e1 = FindEdge(G,n1,n2->info);
            adrEdge e2 = FindEdge(G,n2,n1->info);
            if(e1 != NULL && e2 != NULL){
                deleteEdge(G,n1,e1);
                deleteEdge(G,n2,e2);
            }
        }
    }
    else{
        cout << "Graph Kosong" << endl;
    }
}

void deleteFirstNode(Graph &G,adrNode &P){
    if(G.start != NULL){
        P = G.start;
        G.start = P->nextNode;
    }
}

void delNode(Graph &G, infotypeNode node1){

}

void cetaktarifRute (Graph G, infotypeNode node1, infotypeNode node2){
    if(G.start != NULL){
        adrNode P = FindNode(G,node1);
        if(P != NULL){
            adrEdge Q = P->firstEdge;
            while(Q != NULL){
                adrNode cari = FindNode(G,Q->info);
                if(info(Q) != info(P) && cari != NULL){
                    cout << "Rute dari kota " << node1 << " menuju " << node2 << " melalui kota " << info(Q) << " memiliki tarif " << FindEdge(G,P,node2)->tarif + Q->tarif << endl;
                }

                Q = nextEdge(Q);
            }
            if(FindEdge(G,P,node2) != NULL){
                cout << "Rute dari kota " << node1 << " menuju " << node2 << " memiliki tarif " << FindEdge(G,P,node2)->tarif << endl;
            }
        }

    }
    else{
        cout << "Graph Kosong" << endl;
    }
}
