#include "header_1301194024.h"

int main(){
    Graph G;
    createGraph(G);

    adrNode P;
    adrEdge Q;

    P = alocateNode("SGU");
    addNewNode(G, P);

    P = alocateNode("CN");
    addNewNode(G, P);

    P = alocateNode("BD");
    addNewNode(G, P);

    P = alocateNode("GMR");
    addNewNode(G, P);

    connectingNode(G, "GMR", "SGU", 485000, "KA Argo Bromo");
    connectingNode(G, "SGU", "BD", 525000, "KA Argo Willis");
    connectingNode(G, "CN", "GMR", 220000, "KA Argo Cheribon");
    connectingNode(G, "BD", "GMR", 150000, "KA Argo Parahyangan");

    showNode(G);

    cout << endl << endl << "Rute Kereta : " << endl;
    showNodeEdge(G);

    cout << endl << endl << "Cek Tarif Rute :" << endl;
    cetaktarifRute(G, "GMR", "SGU");

    cout << endl << endl << "Test Delete Edge SGU Dan GMR : ";
    P = FindNode(G, "SGU");
    Q = FindEdge(G, P, "GMR");
    deleteEdge(G, P, Q);

    P = FindNode(G, "GMR");
    Q = FindEdge(G, P, "SGU");
    deleteEdge(G, P, Q);

    showNodeEdge(G);


}
