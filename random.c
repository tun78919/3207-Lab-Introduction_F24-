#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    return rand() % (90 - 65 + 1) + 65;
    /* Return random ascii value between 65 and 90. Rand() function is apart of 
    the standard C library, <stdlib.h>. https://www.geeksforgeeks.org/c-rand-function/ 
    To generate a random number within specified bounds (65-90), rand() % (upper_bound
    - lower_bound + 1) + lower_bound. */
}