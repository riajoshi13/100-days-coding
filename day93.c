#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, topperIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input all students
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find topper
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Output topper
    printf("\nTopper: %s (Marks: %.2f)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
