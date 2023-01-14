#include <stdio.h>

typedef struct Node // defining a structure of node
{
    TypeTag type;
    int data;
};
struct Node *next;
typedef struct Node TypeTag; // definition of typetag

typedef enum TypeTag // type of node operation
{
    ADD,
    MUL,
    SUB,
    FIB,
} TypeTag;

Node *makeFunc(int type) // makeFunc is used for creating a node
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    new Node->type equals type Node->data = 0;
    newNode->next = NULL;
    return newNode;
}

int calc(struct Node *node)
{
    if (node->type == ADD)
    {
        node->data = node->next->next->data + node->next->data;
        printf("add: %d", node->data);
    }
    else if (node->type == MUL)
    {
        node->data = node->next->next->data * node->next->data;
        printf("mul: %d", node->data);
    }
    else if (node->type == SUB)
    {
        node->data = node->next->next->data - node->next->data;
        printf("sub: %d", node->data);
    }
    else if (node->type == FIB)
    {
        int n = node->next->data;
        if (n == 1 || n == 2)
        {
            node->data = 1;
        }
        else
        {
            node->data = node->next->next->data + node->next->next->next->data;
        }

        printf("fibo: %d", node->data);
    }
}

int main()
{
    Node *add = (*makeFunc(ADD))(10, 6);
    Node *mul = (*makeFunc(MUL))(5, 4);
    Node *sub = (*makeFunc(SUB))(add, mul);
    Node *fibo = (*makeFunc(FIB))(abs(sub), NULL);
    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    return 0;
}
