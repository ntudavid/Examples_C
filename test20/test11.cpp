// test11: 指標與記憶體配置

#include <stdio.h>
#include <stdlib.h>

int main(){
    // integer, float, double
    int i = 10;
    int* ptr_i = &i;
    float f = 3.1415;
    float* ptr_f = &f;
    double d = 2.71828;
    double* ptr_d = &d;
    
    printf("The memory location of variabl i : %p \n", &i);
    printf("The memory location of variabl ptr_i : %p \n", &ptr_i);
    printf("The memory location of variabl f : %p \n", &f);
    printf("The memory location of variabl ptr_f : %p \n", &ptr_f);
    printf("The memory location of variabl d : %p \n", &d);
    printf("The memory location of variabl ptr_d : %p \n", &ptr_d);
    printf("\n");
    printf("The value saved at memory %p : %d \n", &i, *ptr_i);
    printf("The value saved at memory %p : %p \n", &ptr_i, ptr_i);
    printf("The value saved at memory %p : %f \n", &f, *ptr_f);
    printf("The value saved at memory %p : %p \n", &ptr_f, ptr_f);
    printf("The value saved at memory %p : %f \n", &d, *ptr_d);
    printf("The value saved at memory %p : %p \n", &ptr_d, ptr_d);
    printf("\n");
    printf("It takes %d bytes for integer.\n", sizeof(i));
    printf("It takes %d bytes for integer pointer.\n", sizeof(ptr_i));
    printf("It takes %d bytes for float.\n", sizeof(f));
    printf("It takes %d bytes for float pointer.\n", sizeof(ptr_f));
    printf("It takes %d bytes for double.\n", sizeof(d));
    printf("It takes %d bytes for double pointer.\n", sizeof(ptr_d));
    printf("\n");

    
    system("PAUSE");
    return 0;
    
}
