#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 10;
    int b = 20;
    int result = sum(a, b);
    printf("sum = %d\n", result);
    return 0;
}

//  with argument with retun type