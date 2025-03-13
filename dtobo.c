
// convertion of decimal to binary ,octal,hexadecimal

#include <stdio.h>

void convert(int num, int base);

int main(void)
{
    int num;

    printf("Enter a positive decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    convert(num, 2);
    printf("\n");

    printf("Octal: ");
    convert(num, 8);
    printf("\n");

    printf("Hexadecimal: ");
    convert(num, 16);
    printf("\n");

    return 0;
}

void convert(int num, int base)
{
    if (num == 0)
    {
        return;
    }
    int rem = num % base;
    convert(num / base, base);

    if (rem < 10)
    {
        printf("%d", rem);
    }
    else
    {
        printf("%c", rem - 10 + 'A');
    }
}
