#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    void *p = malloc(sizeof(struct node));
    struct node * list = p;
    list->i = 0;
    // int n;
    // for (n = 0; n < 10; n++) {
    //     struct node *another = malloc(sizeof(struct node));
    //     list->i = n;
    //     list->next = another;
    //     list = list->next;
    // }
    print_list(list);
    free(list);
    return 0;
}