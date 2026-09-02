/*Given two integers a and b as input, compute and print the values of the following expressions :
a + b, -a - 2b + 3, -2ab, 1 - 2a(b - 3) */

#include <stdio.h>

int main() {

    int a, b;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    printf("%d %d %d %d ", a + b, -a - 2*b + 3, -2*a*b, 1 - 2*a*(b - 3));

    return 0;

}