#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30];
    char s2[10];
    int length, l1, l2, i, value, rev;
    printf("\nEnter a String 1 : ");
    gets(s1);

    printf("\nEnter a String 2 : ");
    gets(s2);

    printf("\nstring is 1 :%s\n", s1);
    printf("\nstring is 2 :%s\n", s2);

    l1 = strlen(s1); // string length
    l2 = strlen(s2);
    printf("\nlength : %d\n", l1);
    printf("\nlength : %d\n", l2);

    while (s1[i] != '\0')
    {
        length++;
        i++;
    }
    printf("\nlength usig loop : %d\n", length);

    strcat(s1, s2); // string combine conginate
    printf("\nthe overall string is : %s\n", s1);

    // strncat(s1, s2, 3);

    // printf("\nthe overall string is : %s\n", s1);

    for (int i = 0; i <= l2; i++)
    {
        s1[l1 + i] = s2[i];
    }
    printf("\nthe using loop string is : %s\n", s1);

    value = strcmp(s1, s2); /// string comparision

    if (value == 0)
    {
        printf("\nnsting are equal :%d\n", value);
    }
    else
    {
        printf("\nsting are not  equal :%d\n", value);
    }

   for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {                                // Check if the character is lowercase
            s1[i] = s1[i] + 32; // Convert to uppercase
        }
    }

    printf("Uppercase string: %s\n", s1);
    for (i = 0; i < l1 / 2; i++)
    {
        int temp = s1[i];
        s1[i] = s1[l1 - 1 - i];
        s1[l1 - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", s1);
    return 0;
}