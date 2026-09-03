/*Given two integers a and b as input, compute and print the values of the a^2 b, a^2 b^2,, and a^2 b^4, using at most 6 multiplications for all three of them in total, 
without using any extra variable and without using the math library. */

#include <stdio.h>

int main() {

    int a,b;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    a = a*a;
    printf("%d\n", a*b);

    b = b*b;
    printf("%d\n", a*b);

    b = b*b;
    printf("%d\n", a*b);

    return 0;


}