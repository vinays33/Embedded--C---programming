#include <stdio.h>
int fact(int num);

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("negative number factoril not allowed\n");
    }
    else
    {
        printf("factorial of a numver %d\n", fact(num));
    }
}
int fact(int num)
{
    if (num == 0)
    {
    return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}
