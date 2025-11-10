#include <stdio.h>
#define SIZE 5  // Maximum size of the queue

int queue[SIZE];
int front = -1;
int rear = -1;

// Function to insert (enqueue) an element into the queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full! Cannot insert %d.\n", value);
    } else {
        if (front == -1)
            front = 0; // First insertion
        rear++;
        queue[rear] = value;
        printf("Inserted %d into the queue.\n", value);
    }
}

// Function to delete (dequeue) an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! Cannot delete.\n");
    } else {
        printf("Deleted %d from the queue.\n", queue[front]);
        front++;
        if (front > rear) { // Queue becomes empty
            front = rear = -1;
        }
    }
}

// Function to display the queue elements
void display() {
    if (front == -1)
        printf("Queue is empty.\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60); // Should show "Queue is full"
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Should show "Queue is empty"

    return 0;
}
