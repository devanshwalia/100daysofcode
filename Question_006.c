//Q6 : Write a program to swap two numbers using a third variable.//
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("The value of a and b after swap = %d %d\n", a, b);

    return 0;
}
