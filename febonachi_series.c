
// 4. program of febonachi seeries
#include <stdio.h>

void printFibonacci(int n)
{
    int a = 0, b = 1, temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printFibonacci(n);
}
