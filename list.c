#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * n) {
    printf("[");
    struct node * m = n;
    while(m) {
        printf("%i", m->i);
        m = m->next;
        if(m) {
            printf(", ");
        }
    }
    printf("]\n");
}

// struct node *insert_front(struct node * n, int i) {

// }

// struct node *free_list(struct node * n) {

// }

// struct node *remove_node(struct node *front, int data) {

// }