#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {

    struct Student s;      // Normal structure variable
    struct Student *ptr;   // Pointer to structure

    ptr = &s;  // Assign address of structure to pointer

    // Taking input using -> operator
    printf("Enter Name, Roll, Marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
            ptr->name, ptr->roll, ptr->marks);

    return 0;
}
