#include <stdio.h>
#include <stdlib.h>

/* structure of node */
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

/* insert at beginning */
void insert_at_beginning(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL) {
        head->prev = newnode;
    }

    head = newnode;
}

/* insert at end */
void insert_at_end(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        newnode->prev = NULL;
        head = newnode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

/* traverse forward */
void traverse_forward() {
    struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Forward Traversal: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* main function */
int main() {
    insert_at_beginning(10);
    insert_at_beginning(20);
    insert_at_end(30);
    insert_at_end(40);

    traverse_forward();

    return 0;
}
