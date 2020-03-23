#include "header_1301194024.h"

void createStack(Stack &S){
    Top(S) = 0;
}

bool isEmpty(Stack S){
    return Top(S) == 0;
}

bool isFull(Stack S){
    return Top(S) == 10;
}

void push(Stack &S, infotype x){
    if(!isFull(S)){
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

int pop(Stack &S){
    infotype x;
    x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo(Stack S){
    for(int i=Top(S); i >= 1; i--){
        cout<<(info(S)[i]) << " ";
    }
}

void ascending(Stack &S){
    for(int i = 0; i<Top(S)+1; i++)
    {
        int temp = info(S)[i];
        int j = i;
        while(j > 0 && info(S)[j-1] > temp)
        {
            info(S)[j] = info(S)[j-1];
            j--;
        }
        info(S)[j] = temp;
    }
}

void descending(Stack &S){
    for(int i = 0; i<S.Top+1; i++)
    {
        int temp = S.info[i];
        int j = i;
        while(j > 0 && info(S)[j-1] < temp)
        {
            info(S)[j] = info(S)[j-1];
            j--;
        }
        info(S)[j] = temp;
    }
}
