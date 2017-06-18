// test20: 自定義結構 --> complex, coordinate

#include <stdio.h>
#include <stdlib.h>

struct complex{
   float re;
   float im;     
};

complex cAdd(complex z1, complex z2){
    complex z;
    z.re = z1.re + z2.re;
    z.im = z1.im + z2.im;
    return z;
}

complex cSub(complex z1, complex z2){
    complex z;
    z.re = z1.re - z2.re;
    z.im = z1.im - z2.im;
    return z;
}

complex cConj(complex z){
    z.im = -z.im;
    return z;
}

complex cMult(complex z1, complex z2){
    complex z;
    z.re = z1.re*z2.re - z1.im*z2.im;
    z.im = z1.re*z2.im + z1.im*z2.re;
    return z;
}

complex cDiv(complex z1, complex z2){
    complex z = cMult(z1, cConj(z2));
    float len2_z2 = z2.re*z2.re + z2.im*z2.im;
    z.re = z.re/len2_z2;
    z.im = z.im/len2_z2;
    return z;
}

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
