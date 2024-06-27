#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = createNode(data);
    if (!newNode) return head;
    newNode->next = head;
    return newNode;
}

Node* insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    if (!newNode) return head;

    if (head == NULL) return newNode;

    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    return head;
}

Node* deleteNode(Node* head, int key) {
    Node* temp = head, * prev;

    if (temp != NULL && temp->data == key) {
        head = temp->next; 
        free(temp);            
        return head;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return head;

    prev->next = temp->next;
    free(temp);
    return head;
}

Node* searchNode(Node* head, int key) {
    Node* current = head;  
    while (current != NULL) {
        if (current->data == key)
            return current;
        current = current->next;
    }
    return NULL;
}

void printList(Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    Node* head = NULL;
    head = insertAtBeginning(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 1);

    printf("Linked List: ");
    printList(head);

    Node* find = searchNode(head, 20);
    if (find != NULL)
        printf("\nElement found: %d", find->data);
    else
        printf("\nElement not found");

    head = deleteNode(head, 5);
    printf("\nAfter deleting 5: ");
    printList(head);

    return 0;
}