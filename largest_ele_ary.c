// 5. check largest element on the array
#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int largest = arr[0];
    int lowest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    printf(" largest element : %d\n", largest);
    printf(" lowest element : %d\n", lowest);
    return 0;
}