#include <stdio.h>

void sum(int a, int b)
{
    int result = a + b;
    printf("sum = %d\n", result);
}

int main()
{
    int a = 10;
    int b = 20;
    sum(a, b);
    return 0;
}
//  with agument without retun type