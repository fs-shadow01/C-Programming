/*Given two integers a and b as input, compute and print the value of 2a + 4b without using any multiplication.*/
#include <stdio.h>
int main() {

    int a, b;
    printf("Enter the value of an and b: ");
    scanf("%d %d", &a, &b);

    a = a + a;
    b = b + b + b + b;

    printf("The value of 2a + 4b is %d", a + b);

    return 0;


}