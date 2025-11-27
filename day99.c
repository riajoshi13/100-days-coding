#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {

    struct Student *s;

    // Dynamic memory allocation
    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Taking Input
    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Printing details
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Free memory
    free(s);

    return 0;
}
