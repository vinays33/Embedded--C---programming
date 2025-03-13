#include <stdio.h>
int sum()
{
    int a = 10;
    int b = 20;
    int sum;
    sum = a + b;
    printf(" sum =%d\n", sum);
    return sum;
}
int main()
{
    int a = sum();
    printf("a= %d\n", a);
    return 0;
}
// no argument with return type