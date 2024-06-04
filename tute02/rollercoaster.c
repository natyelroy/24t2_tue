// part6_roller_coaster
//
// This program was written by T09B zXXXXXX
// on June
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less,
//    it should print an error message
//
// 3. If the height is below the minimum height,
//    it should print a message telling the user they are not tall enough to ride
//
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold,
//    it should print a message telling the user they can ride.

// To test style: 1511 style <file_name>.c

#include <stdio.h>

#define MIN_HEIGHT 100
#define MIN_HEIGHT_ALONE 160

int main(void) {
    // scan height
    int height;
    printf("Enter height: ");
    scanf("%d", &height);

    // error handling
    if (height <= 0) {
        printf("Error: Invalid height\n");
    } else if (height < MIN_HEIGHT) {
        printf("Error: You are not tall enough to ride D:\n");
    } else if (height < MIN_HEIGHT_ALONE) {
        printf("Error: You need an adult to ride\n");
    } else {
        printf("You can ride! :D\n");
    }

    return 0;
}