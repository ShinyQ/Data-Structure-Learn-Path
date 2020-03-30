#include "header_1301194024.h"

int main()
{
     Stack S;
     createStack(S);
     push(S, 12);
     push(S, 17);
     push(S, 5);
     push(S, 10);
     push(S, 15);
     push(S, 25);
     push(S, 11);
     push(S, 22);
     push(S, 19);
     printInfo(S);

     cout << endl;
     ascending(S);
     printInfo(S);

     cout << endl;
     descending(S);
     printInfo(S);
     return 0;
}
