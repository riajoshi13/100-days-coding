#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to return the student with highest marks
struct Student findTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // return structure
}

int main() {
    int n = 3;
    struct Student s[3], topper;

    printf("Enter details of 3 students:\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d Name: ", i + 1);
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    topper = findTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
