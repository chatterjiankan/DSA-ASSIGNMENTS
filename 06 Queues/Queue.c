/*
Question:
Implement a Queue using an array with the following operations:
Enqueue, Dequeue and Display.
*/

#include <stdio.h>

#define SIZE 5

int item[SIZE], front = -1, rear = -1;
int value;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Full\n");
    } else {
        if (front == -1) {
            front = 0;
        }

        rear++;
        item[rear] = value;

        printf("Inserted = %d\n", value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Empty\n");
    } else {
        printf("Deleted %d\n", item[front]);

        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (rear == -1) {
        printf("Empty\n");
    } else {
        printf("Queue Elements : ");

        for (int i = front; i <= rear; i++) {
            printf("%d ", item[i]);
        }

        printf("\n");
    }
}

int main() {
    dequeue();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}

/*
Output:

Empty
Inserted = 10
Inserted = 20
Inserted = 30
Inserted = 40
Inserted = 50
Full
Queue Elements : 10 20 30 40 50
Deleted 10
Deleted 20
Deleted 30
Deleted 40
Deleted 50
Empty
*/
