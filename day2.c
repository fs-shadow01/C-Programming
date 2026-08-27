/*Given two integers a and b as input, compute and 
print the values of the following expressions: a+b, -a - 2b + 3, -2ab, 1 - 2a(b - 3) */
#include <stdio.h>

int main(){

    int a, b;
    int exp1, exp2, exp3;

    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);

    exp1 = a + b;
    exp2 = -a -2*b +3;
    exp3 = 1 - 2*a*(b - 3);

    printf("The value of exp1 is %d\n", exp1);
    printf("The value of exp2 is %d\n", exp2);
    printf("The value of exp3 is %d\n", exp3);

    return 0;

}

