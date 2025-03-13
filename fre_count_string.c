// 10 count number of same character in string or frequancy of each character

#include <stdio.h>

void countFrequency(char str[])
{
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i, freq[i]);
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    countFrequency(str);

    return 0;
}
