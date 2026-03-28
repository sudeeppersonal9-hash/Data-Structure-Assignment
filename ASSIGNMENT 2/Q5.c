#include <stdio.h>
#define SIZE 5

int eq[SIZE];
int front = -1, rear = -1;

void Enqueue(int val) {
    if ((rear + 1) % SIZE == front) { 
        printf("Queue Full\n");
    } else {
        if (front == -1) front = 0; 
        rear = (rear + 1) % SIZE;
        eq[rear] = val;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue Empty\n");
    } else {
        printf("Removed: %d\n", eq[front]); 
        if (front == rear) {
            front = rear = -1; 
        } else {
            front = (front + 1) % SIZE; 
        }
    }
}

void peek() {
    if (front != -1) {
        printf("Front: %d\n", eq[front]); 
    }
}

void display() {
    if (front == -1) {
        printf("Empty\n"); 
    } else {
        int i = front;
        while (1) {
            printf("%d ", eq[i]); 
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    Enqueue(10); 
    Enqueue(20);
    Enqueue(30);
    display(); 
    dequeue(); 
    display();
    peek(); 
    return 0;
}