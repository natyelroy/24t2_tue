// part1_galaxy.c
//
// This program was written by M17X (zID)
// on 24/06/2024
//
// This program is a simple game that allows the user to build a galaxy.
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10
#define FINISH_SCANNING 'q'
#define PLANET_TYPE 'p'
#define NEBULA_TYPE 'n'

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);
void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]);
void place_plants_nebulae(struct celestial_body galaxy[SIZE][SIZE],
                            int row, int col, int points);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];
    int row = 0;
    int col = 0;
    int points = 0;

    // Initialize the galaxy
    initialise_galaxy(galaxy);

    // Place the planets and nebulae in the galaxy
    place_plants_nebulae(galaxy, row, col, points);

    // Place the player in the galaxy.. TODO: make it into a function! :D
    printf("Enter the starting position of the player: ");
    scanf(" %d %d", &row, &col);
    while (galaxy[row][col].entity != EMPTY) {
        printf("Invalid player position!\n");
        printf("Please re-enter the starting position of the player: ");
        scanf(" %d %d", &row, &col);
    }

    galaxy[row][col].entity = SPACESHIP;
    galaxy[row][col].points = 0;

    // Place the stars in the galaxy.. TODO: make it into a function! :D
    printf("Enter the position and points of the star(s): \n");
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }

    // Print the map
    print_map(galaxy);
}

// initialise galaxy with empty entities and zero points
void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

// place planets and nebulae on the galaxy
void place_plants_nebulae(struct celestial_body galaxy[SIZE][SIZE],
                            int row, int col, int points) {
    printf("Enter planets and nebulae: ");
    char command;
    scanf(" %c", &command);

    while (command != FINISH_SCANNING) {
        scanf(" %d %d", &row, &col);

        if (command == PLANET_TYPE) {
            scanf("%d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (command == NEBULA_TYPE) {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }

        scanf(" %c", &command);
    }
}

// Function prints the map of the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}