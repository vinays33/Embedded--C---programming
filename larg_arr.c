#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 23, 56, 89};
    int largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest element is: %d\n", largest);
    int lowest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    printf("The lowest element is: %d\n", lowest);
    return 0;
}
