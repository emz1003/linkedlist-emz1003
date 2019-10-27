#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * n) {
    printf("[");
    while(n) {
        printf("%i", n->i);
        n = n->next;
        if(n) {
            printf(", ");
        } else {
            break;
        }
    }
    printf("]\n");
}

struct node *insert_front(struct node * n, int i) {
    struct node * new;
    new->i = i;
    new->next = n;
    return new;
}

struct node *free_list(struct node * n) {
    printf("freeing %d\n", n->i);
    if (!n->next) {
        free(n);
        return NULL;
    }
    return free_list(n->next);
}

struct node *remove_node(struct node *front, int data) {
    struct node * temp = front;
    if(front->i == data) {
        struct node * t = front->next;
        free(front);
        return t;
    }

    while(temp) {
        if (temp->next->i == data) {
            struct node * t = temp->next;
            temp->next = t->next;
            free(t);
            break;
        }
        temp = temp->next;
    }
    return front;
}