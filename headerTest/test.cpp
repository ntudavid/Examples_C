#include <stdlib.h>
#include <stdio.h>
#include "complex.h"

int main(){  
    complex z1, z2;
    z1.re = 1;
    z1.im = 2;
    z2.re = 3;
    z2.im = 4;
    printf("sizeof(complex) = %d\n", sizeof(complex));
    complex z;
    // complex adding
    z = cAdd(z1,z2);
    printf("(%f+i*%f)+(%f+i*%f) = %f+i*%f\n", z1.re, z1.im, z2.re, z2.im, z.re, z.im);
    
    // complex subtracting
    z = cSub(z1,z2);
    printf("(%f+i*%f)-(%f+i*%f) = %f+i*%f\n", z1.re, z1.im, z2.re, z2.im, z.re, z.im);
    
    // complex muliplying
    z = cMult(z1,z2);
    printf("(%f+i*%f)*(%f+i*%f) = %f+i*%f\n", z1.re, z1.im, z2.re, z2.im, z.re, z.im);
    
    // complex dividing
    z = cDiv(z1,z2);
    printf("(%f+i*%f)/(%f+i*%f) = %f+i*%f\n", z1.re, z1.im, z2.re, z2.im, z.re, z.im);
    
    printf("\n");
    system("PAUSE");
    return 0;
    
}
