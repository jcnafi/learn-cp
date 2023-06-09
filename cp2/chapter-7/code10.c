#include <stdio.h>

int add(int n1, int n2)
{
    return n1+n2;
}

int sub(int n1, int n2)
{
    return n1-n2;
}

int operate(int (*op)(int, int), int n1, int n2)
{
    return op(n1, n2);
}

int main()
{
    int n1 = 10, n2 = 5;
    
    printf("Result: %d\n", operate(&add, n1, n2));

    printf("Result: %d\n", operate(sub, n1, n2));

    return 0;
}
