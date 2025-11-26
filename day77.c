#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infile, *outfile;
    char ch;

    infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(infile);
        return 1;
    }

    while ((ch = fgetc(infile)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, outfile);
    }

    fclose(infile);
    fclose(outfile);

    printf("File converted successfully! Check output.txt\n");

    return 0;
}
