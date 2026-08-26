/* This is my first day in c programming language.*/
/*[One-Variable integer expression]Given an integer a,cpmpute and print the values of the 
following expressions: -a, 2a - 3, 2a^2 - 3a - 4. */
#include <stdio.h>

int main(){
    int a, b, c;
    
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Enter the value of C: ");
    scanf("%d",&c);

    int exp1 = -a;
    int exp2 = 2*a - 3;
    int exp3 = 2*a*a - 3*a - 4;

    printf("%d %d %d", exp1, exp2, exp3);

    return 0;

}