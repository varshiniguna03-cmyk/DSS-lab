#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at end
struct Node* insertEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        return newNode;
    }

    // Traverse to last node
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link last node to new node
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

    printf("Linked List:\n");
    display(head);

    return 0;
}
