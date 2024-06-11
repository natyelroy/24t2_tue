// part2_2d_while_loops.c
//
// This program was writtn by Name zID
// on
//
// This program is a simple deonstration of a 2D while loop

#include <stdio.h>

#define MAX 4

int main(void) {
    printf("Start of outer while loop\n");

    int row = 0;
    while (row < MAX) {
        int col = 0;
        while (col < MAX) {
            if (row == col) {
                printf("O");
            } else {
                printf("X");
            }
            col++;
        }
        printf("\n");
        row++;
    }

    printf("End of outer while loop\n");

    // for (int row = 0; row < MAX; row++) {
    //     for (int col = 0; col < MAX; col++) {

    //     }
    // }

    return 0;
}