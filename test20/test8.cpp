// test8 : if condition為0時表示為false，非0時(即使為負數)表示為true 

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int cond1 = -123;
    if(cond1)
       printf("When the condition is %d, it meants True.", cond1);
    else 
       printf("When the condition is %d, it meants False.", cond1);
    printf("\n");
    
    int cond2 = 0;
    if(cond2)
       printf("When the condition is %d, it meants True.", cond2);
    else 
       printf("When the condition is %d, it meants False.", cond2); 
    printf("\n\n");
    
    system("pause");
    return 0;
}
