// 7 . program to check string or number is palindrome or not

#include <stdio.h>
#include <string.h>

void checkNumberPalindrome(int n);
void checkStringPalindrome(char str[]);

int main()
{
    int choice;
    printf("Check Palindrome for:\n1. Number\n2. String\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        checkNumberPalindrome(num);
    }
    if (choice == 2)
    {
        char str[100];
        printf("Enter a string: ");
        scanf("%s", str);
        checkStringPalindrome(str);
    }
    if (choice >= 3)
    {
        printf("invalid comand");
    }
}
void checkNumberPalindrome(int n)
{
    int original = n;
    int reversed = 0;
    int reminder = 0;

    while (n > 0)
    {
        reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n /= 10;
    }

    if (original == reversed)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}

void checkStringPalindrome(char str[])
{

    int len = strlen(str);
    int left = 0, right = len - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            printf("Not Palindrome\n");
            return;
        }
        left++;
        right--;
    }
    printf("Palindrome\n");
}
