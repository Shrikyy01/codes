#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insert(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        (*head_ref)->next = *head_ref;
        (*head_ref)->prev = *head_ref;
    } else {
        struct Node* lastNode = (*head_ref)->prev;
        newNode->next = *head_ref;
        newNode->prev = lastNode;
        lastNode->next = newNode;
        (*head_ref)->prev = newNode;
    }
}

void printList(struct Node* head) {
    struct Node* current = head;
    if (head != NULL) {
        do {
            printf("%d -> ", current->data);
            current = current->next;
        } while (current != head);
    }
    printf("HEAD\n");
}

void freeList(struct Node* head) {
    if (head == NULL)
        return;

    struct Node* current = head;
    struct Node* next;

    do {
        next = current->next;
        free(current);
        current = next;
    } while (current != head);
}

int main() {
    struct Node* head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    printf("Doubly Circular Linked List: ");
    printList(head);

    freeList(head);

    return 0;
}

