// malloc exercise
// date: today
// by: zID

#include <stdio.h>
#include <stdlib.h>

struct my_struct {
    int number;
    char letter;
    double another_number;
};

int main(void) {
    // int *num = malloc(sizeof(int));
    // *num = 24;
    // printf("Deferenced: %d\n", *num);

    // char *letter = malloc(sizeof(char));
    // double *another_num = malloc(sizeof(double));

    int *num_array = malloc(sizeof(int) * 7);

    struct my_struct *new_struct = malloc(sizeof(struct my_struct));


    return 0;
}