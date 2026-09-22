/*
Question:
Write a C program to sort an array using the Insertion Sort algorithm
and display the array after each step.
*/

#include <stdio.h>

void insertionSort(int arr[], int size);
void display(int arr[], int size);

void insertionSort(int arr[], int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        printf("Step %d : ", step + 1);

        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {55, 98, 45, 10, 9, 17, 23, 85};
    int size = sizeof(arr) / sizeof(int);

    insertionSort(arr, size);

    printf("Sorted Array\n");
    display(arr, size);

    return 0;
}

/*
Output:

Step 2 : 55 98 45 10 9 17 23 85
Step 3 : 45 55 98 10 9 17 23 85
Step 4 : 10 45 55 98 9 17 23 85
Step 5 : 9 10 45 55 98 17 23 85
Step 6 : 9 10 17 45 55 98 23 85
Step 7 : 9 10 17 23 45 55 98 85
Step 8 : 9 10 17 23 45 55 85 98
Sorted Array
9 10 17 23 45 55 85 98
*/
