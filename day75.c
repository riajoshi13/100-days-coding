#include <stdio.h>

int main() {
    char filename[50];
    char text[200];
    FILE *fp;

    // Taking filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Opening in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    // Clearing input buffer
    getchar();

    // Taking the line to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Appending the line
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
