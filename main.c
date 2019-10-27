#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    void *p = calloc(1, sizeof(struct node));
    struct node * list = p;
    struct node * temp = p;

    int n;
    for (n = 0; n < 10; n++) {
        printf("adding %d to list\n", n);
        struct node *another = calloc(1, sizeof(struct node));
        temp->i = n;
        if(n != 9){
            temp->next = another;
            temp = temp->next;
        }
    }
    printf("printlist(list): ");
    print_list(list);

    printf("insert_front(list, 100): ");
    list = insert_front(list, 100);
    print_list(list);

    printf("freelist(list):");
    list = free_list(list);
    print_list(list);

    void *rm = calloc(1, sizeof(struct node));
    struct node *anotherList = rm;
    struct node *tempPointer = rm;

    for (n = 0; n < 10; n++)
    {
        printf("adding %d to anotherList\n", n);
        struct node *another = calloc(1, sizeof(struct node));
        tempPointer->i = n;
        if (n != 9)
        {
            tempPointer->next = another;
            tempPointer = tempPointer->next;
        }
    }

    printf("remove_node(anotherList, 4): ");
    anotherList = remove_node(anotherList, 4);
    print_list(anotherList);

    if(!p){
        free(p);
    }
    
    if(!rm) {
        free(rm);
    }
    return 0;
}