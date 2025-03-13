#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 23, 56, 89};
    int sum = 0;
    //int n = sizeof(arr) / sizeof(arr[0]);
    int n=5;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("The sum of array elements is: %d\n", sum);
    return 0;
}
