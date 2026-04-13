#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Node {
    int data;
    struct Node* next;
};

// Function to delete last node
struct Node* deleteEnd(struct Node* head) {
    // If list is empty
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    // If only one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    // Traverse to second last node
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete last node
    free(temp->next);
    temp->next = NULL;

    return head;
}

// Function to insert at end (for testing)
struct Node* insertEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Function to display list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;
    int n, value, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Original List:\n");
    display(head);

    head = deleteEnd(head);

    printf("After deleting last node:\n");
    display(head);

    return 0;
}
