#include <stdio.h>
// 2. Write a program to calculate the factorial of a number using recursion.

void factorial(int n, int fact)
{
    if (n > 1)
    {
        fact = fact * n;
        factorial(n - 1, fact);
    }
    else
    {
        printf("Factorial is %d\n", fact);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n, 1);
    return 0;
}
// without recursion
// #include <stdio.h>
//
// void factorial(int n) {
// int fact = 1;
//
// for (int i = 1; i <= n; i++) {
// fact *= i;
// }
//
// printf("Factorial is %d\n", fact);
// }
//
// int main() {
// int n;
// printf("Enter a number: ");
// scanf("%d", &n);
//
// factorial(n);
//
// return 0;
// }
//