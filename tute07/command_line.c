// This program is a demonstration on command lines
// Date: today
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>

int main(int argc, char *argv[]) {
    // How do we print out the values or argc and argv?
    printf("Value of argc: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            printf("Value: %c\n", argv[i][j]);
        }

    }

    return 0;
}
