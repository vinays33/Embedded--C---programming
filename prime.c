#include <stdio.h>

void checkPrime(int n)
{
    if (n <= 1)
    {
        printf("Number is Not Prime\n");
        return;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("Number is Not Prime\n");
            return;
        }
    }
    printf("Number is Prime\n");
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    checkPrime(n);
    return 0;
}
