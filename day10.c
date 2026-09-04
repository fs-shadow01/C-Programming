/* Given two integers a and b as input, compute and print the value of 2a + 4b without using any multiplications.*/

#include <stdio.h>

int main() {

    int a, b;

    printf("Enter the values of a and b: ");
    scanf("%d%d", &a, &b);

    a <<= 1;
    b <<= 2;

    printf("%d %d", a, b);
    
    return 0;
    
}