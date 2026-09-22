/*
Question:
Write a C program to demonstrate the use of pointers and
double pointers.
*/

#include <stdio.h>

int main() {
    int age = 20;
    int *p = &age;
    int **pp = &p;

    printf("%d %d %d\n", age, *p, **pp);

    (*p)++;

    printf("%d %d %d\n", age, *p, **pp);

    **pp += 10;

    printf("%d %d %d\n", age, *p, **pp);

    int x = 70;
    *pp = &x;

    printf("%d %d %d\n", x, *p, **pp);

    (*p) -= 5;

    printf("%d %d %d\n", x, *p, **pp);

    printf("%d %d\n", age, x);

    return 0;
}

/*
Output:

20 20 20
21 21 21
31 31 31
70 70 70
65 65 65
31 65
*/
