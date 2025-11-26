#include <stdio.h>

int main() {
    char srcName[50], destName[50];
    FILE *src, *dest;
    int ch;

    // Taking filenames from user
    printf("Enter source filename: ");
    scanf("%s", srcName);

    printf("Enter destination filename: ");
    scanf("%s", destName);

    // Opening files
    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Unable to open source file!\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Unable to create destination file!\n");
        fclose(src);
        return 1;
    }

    // Copying character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
