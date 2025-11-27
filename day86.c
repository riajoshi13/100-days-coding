#include <stdio.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;
    char op[20];

    scanf("%s %d %d", op, &a, &b);

    // Convert input string to enum value
    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
