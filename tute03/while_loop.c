// while_loops.c
//
// Written by Name zID
// on June 2024
//
// This program is a simple demonstration of a count loop in c

#include <stdio.h>

int main(void) {
    printf("Start loop here!\n");
    int x = 0;

    while (x < 10) {
        printf("Value of x: %d\n", x);
        x++;
    }

    printf("End of loop!\n");

    return 0;
}