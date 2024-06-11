// coffee_shop.c
//
// Written by YOUR-NAME (zID)
// on TODAYS-DATE
//
// This program is a simple coffee shop used to demonstrate the use of
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// TODO: Define an enum `coffee_type` that stores the different types of coffees
// the shop sells. These are: LATTE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.
enum coffee_type {
    LATTE,
    CAPPUCCINO,
    ESPRESSO,
    AMERICANO,
    MATCHA
};

// TODO: Define a struct `coffee` that stores
// 1. the coffee type (an enum)
// 2. the number of sugars
// 3. the size of a coffee
struct coffee {
    enum coffee_type type;
    int num_sugar;
    char size;
};

int main(void) {
    // TODO: Initalise a variable for the struct
    struct coffee order;
    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, \\
            3: AMERICANO, 4: MATCHA): ");

    // TODO: take user input
    int user_coffee_type;
    scanf("%d", &user_coffee_type);

    if (user_coffee_type == 0) {
        order.type = LATTE;
    } else if (user_coffee_type == 1) {
        order.type = CAPPUCCINO;
    } else if (user_coffee_type == 2) {
        order.type = ESPRESSO;
    } else if (user_coffee_type == 3) {
        order.type = AMERICANO;
    } else if (user_coffee_type == 4) {
        order.type = MATCHA;
    }

    printf("Enter number of sugars: ");
    int n_sugar;
    scanf("%d", &n_sugar);
    order.num_sugar = n_sugar;

    printf("Enter size (L for Large, R for Regular): ");
    scanf(" %c", &order.size);

    printf("Order type: %d\n", order.type);
    printf("Num sugar: %d\n", order.num_sugar);
    printf("Size: %c\n", order.size);
    // TODO: Calculate cost of order

	// printf("Total cost: %.2lf\n", total_cost);
	return 0;
}