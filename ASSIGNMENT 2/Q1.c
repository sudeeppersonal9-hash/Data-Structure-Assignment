#include <stdio.h>
#include <string.h>

#define Max 100
char Stack[Max]; 
int top = -1;

void push(char c) {
    Stack[++top] = c; 
}

char pop() {
    return Stack[top--]; 
}

int main() {
    char str[100];
    printf("Enter String : ");
    scanf("%s", str); 

    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        push(str[i]); 
    }

    for(int i = 0; i < len; i++) {
        str[i] = pop(); 
    }

    printf("Reversed String: %s", str); 
    return 0;
}