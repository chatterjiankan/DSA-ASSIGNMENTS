/*
Question:
Write a C program to insert an element at a given position in an array.

Input:
Enter a number to be added : 5
Enter position : 2

Output:
1 2 5 4 6
*/

#include <stdio.h>

void addElm(int n, int pos, int arr[]);
void printArr(int arr[]);

int main() {
    int n, pos;
    int arr[6] = {1, 2, 4, 6, 7};

    printf("Enter a number to be added : ");
    scanf("%d", &n);

    printf("Enter position : ");
    scanf("%d", &pos);

    addElm(n, pos, arr);
    printArr(arr);

    return 0;
}

void addElm(int n, int pos, int arr[]) {
    for (int i = 4; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = n;
}

void printArr(int arr[]) {
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
}

/*
Output:

Enter a number to be added : 5
Enter position : 2
1 2 5 4 6 7
*/
