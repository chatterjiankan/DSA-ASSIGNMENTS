/*
Question:
Write a C program to delete an element from a given position in an array.

Input:
2

Output:
1 2 6 7
*/

#include <stdio.h>

void delElm(int pos, int arr[]);
void printArr(int arr[]);

int main() {
    int pos;
    int arr[5] = {1, 2, 4, 6, 7};

    printf("Enter index of element to be deleted : ");
    scanf("%d", &pos);

    delElm(pos, arr);
    printArr(arr);

    return 0;
}

void delElm(int pos, int arr[]) {
    for (int i = pos; i < 4; i++) {
        arr[i] = arr[i + 1];
    }
}

void printArr(int arr[]) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
}

/*
Output:

Enter index of element to be deleted : 2
1 2 6 7
*/
