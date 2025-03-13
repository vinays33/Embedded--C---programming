// 22.Write a program to convert a decimal number to binary.
#include <stdio.h>

void decimalToBinary(int num)
{
    int binary = 0, place = 1;

    while (num > 0)
    {
        binary = binary + (num % 2) * place;
        num = num / 2;
        place = place * 10;
    }

    printf("Binary: %d\n", binary);
}

void binaryToDecimal(int num)
{
    int decimal = 0, base = 1;

    while (num > 0)
    {
        decimal = decimal + (num % 10) * base;
        num = num / 10;
        base = base * 2;
    }

    printf("Decimal: %d\n", decimal);
}

int main()
{
    int decimalNum, binaryNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    decimalToBinary(decimalNum);

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);
    binaryToDecimal(binaryNum);

        return 0;
}
