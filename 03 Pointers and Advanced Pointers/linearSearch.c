/*
Question:
Write a C program to search for an element in an array using
Linear Search and pointer arithmetic.
*/

#include <stdio.h>

int linearSearch(int arr[], int key, int size) {
    for (int i = 0; i < size; i++) {
        if (key == *(arr + i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 2, 4, 6, 9, 5, 12};
    int key;

    printf("Enter key to be searched : ");
    scanf("%d", &key);

    int size = sizeof(arr) / sizeof(int);

    int result = linearSearch(arr, key, size);

    if (result != -1) {
        printf("Found!");
    } else {
        printf("Enter a valid key");
    }

    return 0;
}

/*
Output:

Enter key to be searched : 9
Found!
*/
