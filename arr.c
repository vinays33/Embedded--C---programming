#include <stdio.h>

int main()
{
    int a[10];
    int even = 0;
    int odd = 0;

    printf("\nEnter the marks of students:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks of student [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nMarks of students:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Marks [%d]: %d\n", i + 1, a[i]);
    }

    printf("\nEven marks:\n");
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Even mark [%d]: %d\n", i + 1, a[i]);
            even++;
        }
    }

    printf("\nOdd marks:\n");
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("Odd mark [%d]: %d\n", i + 1, a[i]);
            odd++;
        }
    }

    printf("\nTotal number of even marks: %d\n", even);
    printf("Total number of odd marks: %d\n", odd);

    return 0;
}
