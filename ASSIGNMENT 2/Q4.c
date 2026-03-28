#include <stdio.h>
#define Max 5

int queue[Max], front = -1, rear = -1;

void Enqueue(int doc) {
    if (rear == Max - 1) {
        printf("Queue Full\n"); 
    } else {
        if (front == -1) front = 0; 
        queue[++rear] = doc;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("No documents\n");
    } else {
        printf("Printing document %d\n", queue[front++]);
    }
}

