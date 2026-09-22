/*
Question:
Write a C program to access an element of an array using pointer arithmetic.
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 4, 3, 7, 9, 5};
    int idx;

    printf("Enter index of element to be accessed : ");
    scanf("%d", &idx);

    printf("Element at index %d is %d", idx, *(arr + idx));

    return 0;
}

/*
Output:

Enter index of element to be accessed : 3
Element at index 3 is 7
*/
