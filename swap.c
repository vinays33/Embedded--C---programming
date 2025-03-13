#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("Inside swap: values of a = %d and b = %d\n", *p, *q);
}

int main()
{
    int a = 20;
    int b = 10;
    printf("Before swap: values of a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: values of a = %d and b = %d\n", a, b);
    return 0;
}
