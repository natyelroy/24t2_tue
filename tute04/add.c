// functions.c
//
// Written by T09B
// on June 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function protoype
int calculate_sum(int val1, int val2);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // Function call
    calculate_sum(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// this function is calculating the sum of 2 numbers
int calculate_sum(int val1, int val2) {
    return (val1 + val2);
}