#include <stdio.h>
void factorial(int n,int fact)
{
    if (n > 1)
    {
        fact =fact* n;
        factorial(n - 1,fact);
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
    factorial(n,1);
    return 0;
}