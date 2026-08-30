/*Compute and print the values of the following expressions in floating point 
(rounded off to 3rd decimal place), where a,b are positive integers given as input.
   a + b, a/b, (1/a +1/b)^(1/2)^1/1+b. 
For example, if a = 2 and b = 3. then the respective printed values will be 5.000, 0.667, 0.982.
As the values should be real, the computations should be in the real domain. You should use the 
math liberary (math.h) and compile your code as follows: gcc <input file> -lm*/

#include <stdio.h>
#include <math.h>

int main() {

    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d%d", &a, &b);

    float exp1 = a + b;
    float exp2 = a/b;
    float exp3 = pow(sqrt(1.0/a +1.0/b), 1.0/(a+b));
    
    printf("%0.3f %0.3f %0.3f", exp1, exp2, exp3);

    return 0;

}