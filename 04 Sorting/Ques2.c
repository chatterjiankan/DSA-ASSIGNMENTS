/*
Question:
Take n number of elements and split them into two arrays.
For the first half, apply Selection Sort.
For the second half, apply Insertion Sort.
Then merge the two sorted arrays.
*/

#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;

        for (int i = step + 1; i < size; i++) {
            if (arr[i] < arr[min_idx]) {
                min_idx = i;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[step];
        arr[step] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void merge(int n1[], int size1, int n2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (n1[i] < n2[j])
            result[k++] = n1[i++];
        else
            result[k++] = n2[j++];
    }

    while (i < size1) {
        result[k++] = n1[i++];
    }

    while (j < size2) {
        result[k++] = n2[j++];
    }
}

int main() {
    int len;

    printf("Enter number of elements: ");
    scanf("%d", &len);

    int arr[len];

    for (int i = 0; i < len; i++) {
        printf("Enter %dth elm : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int size1 = len / 2;
    int size2 = len - size1;

    int n1[size1];
    int n2[size2];
    int result[len];

    for (int i = 0; i < size1; i++) {
        n1[i] = arr[i];
    }

    for (int i = 0; i < size2; i++) {
        n2[i] = arr[size1 + i];
    }

    selectionSort(n1, size1);

    printf("\nFirst half after Selection Sort: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", n1[i]);
    }

    insertionSort(n2, size2);

    printf("\nSecond half after Insertion Sort: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", n2[i]);
    }

    merge(n1, size1, n2, size2, result);

    printf("\nFinal merged array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

/*
Output:

Enter number of elements: 8
Enter 1th elm : 55
Enter 2th elm : 98
Enter 3th elm : 45
Enter 4th elm : 10
Enter 5th elm : 9
Enter 6th elm : 17
Enter 7th elm : 23
Enter 8th elm : 85

First half after Selection Sort: 10 45 55 98
Second half after Insertion Sort: 9 17 23 85
Final merged array: 9 10 17 23 45 55 85 98
*/
