#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    ADD,
    MUL,
    SUB,
    FIB
} TypeTag;

typedef struct Node
{
    TypeTag type;
    int data;
} Node;

Node *makeFunc(TypeTag new_type)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->type = new_type;
    newNode->data = 0;
    return newNode;
}

int fibonacci(int a)
{
    int fib[a + 2];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= a; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[a] - 1;
}

int calc(Node *new_node, int a, int b)
{
    if (new_node->type == ADD)
    {
        new_node->data = a + b;
        printf("add: %d\n", new_node->data);
        return new_node->data;
    }
    else if (new_node->type == SUB)
    {
        new_node->data = b - a;
        printf("sub: %d\n", new_node->data);
        return new_node->data;
    }
    else if (new_node->type == MUL)
    {
        new_node->data = a * b;
        printf("mul: %d\n", new_node->data);
        return new_node->data;
    }
    else
    {
        new_node->data = fibonacci(a);
        printf("fib: %d\n", new_node->data);
        return new_node->data;
    }
}

int main()
{
    Node *add = makeFunc(ADD);
    Node *sub = makeFunc(SUB);
    Node *mul = makeFunc(MUL);
    Node *fibo = makeFunc(FIB);

    calc(add, 10, 6);
    calc(mul, 5, 4);
    calc(sub, mul->data, add->data);
    calc(fibo, abs(sub->data), -1);
}