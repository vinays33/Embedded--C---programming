//Write a program to reverse a string using pointers.//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
   //scanf("%99[^\n]", str); //  you can use fgets if you familer 
   fgets(str, sizeof(str), stdin);
    //scanf("%s",str);
    
    int len = strlen(str);
    char *left = str;
    char *right = str + len - 1;
    
    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    
    printf("Reversed string: %s\n", str);
    return 0;
}

// without pointer

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     //scanf(" %[^\n]", str);  
//     fgets(str,sizeof(str),stdin);

//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++) {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }

//     printf("Reversed string: %s\n", str);
//     return 0;
// }
