#include <stdio.h>
#define Max 100

char Stack[Max];
int top = -1;

void push(char c) {
    Stack[++top] = c; 
}

char pop() {
    return Stack[top--]; 
}

int isEmpty() {
    return top == -1;
}

int main() {
    char exp[100];
    printf("Enter Expression: ");
    scanf("%s", exp); 

    for (int i = 0; exp[i] != '\0'; i++) { 
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(exp[i]); 
        } 
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (isEmpty()) {
                printf("Not Balanced");
                return 0;
            }
            pop(); 
        }
    }

    if (isEmpty()) {
        printf("Balanced Expression"); 
    } else {
        printf("Not Balanced"); 
    }
    return 0;
}