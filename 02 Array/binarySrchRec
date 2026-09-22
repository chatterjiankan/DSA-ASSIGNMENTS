/*
Question:
Write a C program to search for an element in a sorted array using
Recursive Binary Search.

Input:
17

Output:
Found
*/

#include <stdio.h>

int binarySearch(int arr[], int k, int start, int end) {
    if (start > end) {
        return 0;
    }

    int mid = start + (end - start) / 2;

    if (k == arr[mid]) {
        return 1;
    } else if (k > arr[mid]) {
        return binarySearch(arr, k, mid + 1, end);
    } else {
        return binarySearch(arr, k, start, mid - 1);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 12, 14, 17, 22};
    int len = sizeof(arr) / sizeof(int);
    int k;

    printf("Enter key to be searched : ");
    scanf("%d", &k);

    if (binarySearch(arr, k, 0, len - 1)) {
        printf("Found");
    } else {
        printf("Enter a valid Key!");
    }

    return 0;
}

/*
Output:

Enter key to be searched : 17
Found
*/
