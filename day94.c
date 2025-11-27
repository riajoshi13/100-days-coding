#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that accepts structure as parameter
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter Student Details:\n");

    printf("Name: ");
    scanf("%s", st.name);

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("Marks: ");
    scanf("%f", &st.marks);

    printf("\n");
    printStudent(st);

    return 0;
}
