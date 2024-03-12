#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        newNode->next = newNode;
    } else {
        struct Node* lastNode = *head_ref;
        while (lastNode->next != *head_ref) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
        newNode->next = *head_ref;
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

int main() {
    struct Node* head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    printf("Circular Linked List: ");
    printList(head);

    return 0;
}

