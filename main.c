#include <stdio.h>
#include "math.h"

int main(){
    //TRIGONOMETRIC TEST CASES
    printf("rad of 30deg is %f\n",toRad(30));
    printf("deg of pi/6 is %f\n",toDeg(PI/6));
    //EXPONENTIAL TEST CASES
    printf("2^4.5: %f\n",power(2.0,4.5));
    printf("9^0.5: %f\n",power(9.0,0.5));
    printf("0^4: %f\n",power(0.0,4.0));
    printf("2^0: %f\n",power(2.0,0.0));
    //Negative Numbers
    printf("2^-2: %f\n",power(2.0,-2.0));
    printf("2^-0.25: %f\n",power(2.0,-0.25));
    //Absolute Values
    printf("abs(-3):%f\n",absolute(-3.0));
    printf("abs(3):%f\n",absolute(3.0));
    return 0;
}