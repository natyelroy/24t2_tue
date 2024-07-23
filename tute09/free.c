// Program to malloc and free
// Written by T09B

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);
struct node *free_list(struct node *head);
struct node *create_list(void);
struct node *remove_tail(struct node *head);
void print_list(struct node *head);

int main(void) {

    struct node *list = create_list();
    printf("\nList:\n");
    print_list(list);

    list = remove_tail(list);
    printf("\nList after freeing:\n");
    print_list(list);

    list = free_list(list);
    printf("\nList after freeing:\n");
    print_list(list);

    printf("\n");

    return 0;
}

// 2. Remove last node
struct node *remove_tail(struct node *head) {
    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct node *current = head;
    while(current->next->next != NULL) {
        current = current->next;
    }

    struct node *temp = current->next;
    current->next = NULL;
    free(temp);
    return head;
}

// 3. free the given list
struct node *free_list(struct node *head) {

    struct node *current = head;
    while (current != NULL) {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }
    return NULL;
}

// 1. how to make a node
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

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}