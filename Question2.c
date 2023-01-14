#include <stdio.h>

// Method 1 -> Using Simple Recursion
int fib1(int n)
{

    if (n <= 2)
    {
        return n;
    }

    return fib1(n - 3) + fib1(n - 2);
}

// Method 2 -> Using Dynamic Programming
int fib2(int n)
{

    int F[n + 2];

    F[0] = 0;
    F[1] = 1;
    F[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        F[i] = F[i - 3] + F[i - 2];
    }

    return F[n];
}

// Method 3-> Using Space Optimization
int fib3(int n)
{

    int a0 = 0, a1 = 1, a2 = 2, a3;

    if (n == 0)
    {
        return a0;
    }
    if (n == 1)
    {
        return a1;
    }

    for (int i = 3; i <= n; i++)
    {

        a3 = a0 + a1;
        a0 = a1;
        a1 = a2;
        a2 = a3;
    }

    return a2;
}

int main()
{

    int n;
    printf("enter n:\n");
    scanf("%d", &n);
    printf("Result using Method 1: %d", fib1(n));
    printf("\n");
    printf("Result using Method 2: %d", fib2(n));
    printf("\n");
    printf("Result using Method 3: %d", fib3(n));
    printf("\n");
}