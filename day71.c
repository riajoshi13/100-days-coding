// Day 71
// Q121: Create a file and write name & age using fprintf()

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // taking user input
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    // writing to file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}

/*
Sample Input:
Name: Rahul
Age: 23

Output:
File created successfully! Data written to info.txt
*/
