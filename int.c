#include <stdio.h>

int main()
{
    printf("Size of int: %d bytes\n", sizeof(int));        // Correct for size_t
    printf("Size of char: %c bytes\n", sizeof(char));      // Correct for size_t
    printf("Size of float: %f bytes\n", sizeof(float));    // Correct for size_t
    printf("Size of double: %ld bytes\n", sizeof(double));  // Correct for size_t

    return 0;
}
