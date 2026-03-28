#include <stdio.h>

void next_greater(int arr[], int n) {
    for (int i = 0; i < n; i++) { 
        int next = -1; 
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] > arr[i]) { 
                next = arr[j];
                break; 
            }
        }
        printf("%d -> %d\n", arr[i], next); 
    }
}

int main() {
    int arr[] = {4, 5, 2, 10, 8}; 
    int n = 5; 
    next_greater(arr, n); 
    return 0;
}