#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    void *pdata;
    struct Node *pre;
    struct Node *next;
} Node,*pNode;
pNode Listinit(void)
{
    pNode p=(pNode)malloc(sizeof(Node));
    p->pre=p;
    p->next=p;
    return p;
}

int main(void)
{
    pNode p=Listinit();
    system("pause");

}
