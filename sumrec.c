#include <stdio.h>
int sum(int num);

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("sum  of a numver %d\n", sum(num));
}
int sum(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num + sum(num - 1));
    }
}
