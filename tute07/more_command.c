// This program is a demonstration on command lines
// Date: today
// By Natalie Leroy (zXXXXXXX)

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Sum of Command Line Arguments
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum = sum + atoi(argv[i]);
    }

    printf("Sum: %d\n", sum);

    // Count Characters in Command Line Arguments
    int count_characters = 0;
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            count_characters++;
        }
    }

    printf("Num of characters: %d\n", count_characters);

    // Reverse Command Line Arguments
    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    // Check for Command Line Arguments
    if (argc > 1) {
        printf("Yes! There are command line arguments!\n");
    } else {
        printf("No! There are no command line arguments!\n");
    }
    return 0;
}
