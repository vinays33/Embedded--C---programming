// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int rollno;
//     char name[30];
//     float marks;
// };
// int main()
// {
//     struct student s1[5];
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("rollno: %d\n,name: %s\n,marks:%f \n" ,& s1[i].rollno, &s1[i].name, &s1[i].marks);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("rollno: %d,name: %s,marks: %f " ,s1[i].rollno, s1[i].name, s1[i].marks);
//     }
// }
  
#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[30];
    float marks;
};

int main() {
    struct student s1[5];

    for (int i = 0; i < 4; i++) {
        printf("Enter details for student:\n");
        scanf("%d", &s1[i].rollno);               // Fixed: Removed text "rollno:" from scanf                                // Consume newline left by scanf
        scanf("%s", s1[i].name);                  // Fixed: Removed '&' from name
        scanf("%f", &s1[i].marks);                // Fixed: Removed "marks:" from scanf
    }

    for (int i = 0; i < 4; i++) {
        printf("rollno: %d, name: %s, marks: %f\n", s1[i].rollno, s1[i].name, s1[i].marks); // Fixed: Added newline for better output readability
    }

    return 0;
}
