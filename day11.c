/* Compute and print the values of the x/y and 1/x + 1/y in the floating point, 
where x,y are nonzero real numbers given as input. The value of the 1st expression should 
be printed up to the 6th decimal place, and that of the 2nd expression up to 3rd decimal place.
For example, if x = 2 and y = 3, then the printed values should be 0.666667 and 0.833, respectively.*/

#include <stdio.h>

int main() {

    float x, y;

    printf("Enter the value of the x and y: ");
    scanf("%f %f", &x, &y);

    printf("%0.6f\n", x/y);
    printf("%0.3f\n", 1/x + 1/y);

    return 0;
    
}