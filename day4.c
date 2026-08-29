/*Compute and print the value of 
x/y and 1/x + 1/y in floiating points, where x.y are nonzero real numbers given as input.
The value of !st expression should be printed up to the 6th decimal place, and that of the
2nd expression upto the 3rd decimal place. For example, if x=2 and y = 3, then the printed
values should be 0.666667 and 0.833 */

#include <stdio.h>

int main() {

    float x, y;

    printf("Enter the value of x and y: ");
    scanf("%f%f", &x, &y);

    printf("x/y = %f, 1/x + 1/y = %0.3f\n", x/y, 1/x + 1/y);

    return 0;
    
}