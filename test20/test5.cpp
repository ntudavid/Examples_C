// test5 : 整數相除仍為整數。小數部分一律被捨去。

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 15, j = 2;
    printf("The answer of integer 15 divided by integer 2 is %d.\n\n", i/j);
    
    i = -15;
    printf("The answer of integer -15 divided by integer 2 is %d.\n\n", i/j);
    
    system("PAUSE");
    return 0;
    
}
