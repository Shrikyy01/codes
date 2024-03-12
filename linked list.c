#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    void* data;
    int data_type;
    struct Node* next;
};

struct Node* createNode(void* data, int data_type) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->data_type = data_type;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node** head_ref, void* data, int data_type) {
    struct Node* newNode = createNode(data, data_type);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }
    struct Node* lastNode = *head_ref;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data_type == 1)
            printf("%d -> ", *((int*)current->data));
        else if (current->data_type == 2)
            printf("%.2f -> ", *((float*)current->data));
        else if (current->data_type == 3)
            printf("%s -> ", (char*)current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
}

int main() {
    struct Node* head = NULL;

    int int_data = 10;
    insert(&head, &int_data, 1);

    float float_data = 3.14;
    insert(&head, &float_data, 2);

    char* str_data = strdup("Hello");
    insert(&head, str_data, 3);

    printf("Linked List: ");
    printList(head);

    freeList(head);

    return 0;
}

