/*Write the new values obtained after the 
following statements are executed one after the other*/

#include <stdio.h>

int main() {

    int a, b, x;
    a = 10, b = 20, x;
    x = 50 + a++;
    x = a++ + --b;
    x = a++ - --a;
    
    printf("%d", x);

    return 0;

}