#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    int arr[] = {3, 8, 5, 12, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter a number to search: ");
    scanf("%d", &key);
    getchar();

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}

/*
info:

    linear search = I terate thought a collection one element a time 

    runtime complextity: O(n)

    disadavantages:
    fast for searches of small to medium data sets 
    Does not need to sorted 
    Useful for data structes that do not have random access (linked list)

*/