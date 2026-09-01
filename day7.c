/*Given an integer a, compute and print the values of the following expressions:
-a, 2a - 3, 2a^2 - 3a -4*/

#include <stdio.h>

int main() {

    int a, b, c;
    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d %d %d", -a, 2*a - 3, 2*a*a - 3*a - 4);

    return 0;

}