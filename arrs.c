#include <stdio.h>

int main()
{
    int a[5];
    int sum = 0;
    float average;

    printf("\nEnter the marks of students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nMarks of students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Marks [%d]: %d\n", i + 1, a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        // sum =  a[0]+a[1]+a[2]+a[3]+a[4];
        sum=sum+i;
    }

    average = sum / 5.0;

    printf("\nSum of marks of all students: %d\n", sum);
    printf("Average of marks of all students: %.2f\n", average);

    return 0;
}
