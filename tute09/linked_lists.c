// Emily Chen & Tom Kunc
// Program to do various linked list exercises
// Written by T09B

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

/** PRESCRIBED FUNCTIONS **/

// Append to a linked list
struct node *add_last(struct node *head, int data);

// Prints the data of a linked list
void print_list(struct node *head);

// Returns a copy of the linked list and frees the original list.
struct node *list_copy(struct node *head);

// Returns a first linked list where it is the second appended to the first
struct node *list_append(struct node *first_list, struct node *second_list);

// Returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *first_list, struct node *second_list);

/** REVISION FUNCTIONS **/

// Deletes the last node of the given linked list and returns the head of
// the linked list
struct node *delete_last(struct node *head);

// Returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head);

// Given two linked lists in strictly increasing order, perform the set operation: union.
// Return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// which has no duplicates (only include them once)
struct node *set_union(struct node *first_list, struct node *second_list);

// Frees all the elements in a linked list
void free_list(struct node *head);

// Return the number of items in the linked list
int num_items(struct node *head);

struct node *create_list(void);
struct node *create_new_node(int value);

int main(void) {

    struct node *list_1 = create_list_1();
    printf("\nList 1:\n");
    print_list(list_1);

    struct node *list_2 = create_list_2();
    printf("\nList 2:\n");
    print_list(list_2);

    printf("\nCopied list 1:\n");


    printf("\nAppended list 1 & 2:\n");

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// 1. Copy a linked list to a new linked list
struct node *list_copy(struct node *list) {
    return NULL;
}

// 2. Append the second list to be at the end of the first list
struct node *list_append(struct node *first_list, struct node *second_list) {
    return NULL;
}

// TODO: Check if first_list is the same as second_list
int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}

struct node *create_list(void) {
    int array[SIZE] = {7, 8, 9, 10, 11, 12};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return head;
}