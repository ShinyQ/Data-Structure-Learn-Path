#include "header_1301194024.h"

int main()
{
    Stack S;
    createStack(S);
    push(S,2);
    push(S,3);
    push(S,4);
    push(S,5);
    printInfo(S);
    cout << endl;
    pop(S);
    printInfo(S);
    return 0;

}
