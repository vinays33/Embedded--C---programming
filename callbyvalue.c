#include <stdio.h>

void fun(int p, int q)
{
    p = 100;
    q = 50;
    printf("Inside fun: values of a = %d and b = %d\n", p, q);
}

int main()
{
    int a = 20;
    int b = 10;
    fun(a, b);
    printf("In main: values of a = %d and b = %d\n", a, b);
    return 0;
}
