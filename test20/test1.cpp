// test1 : 如果宣告變數沒有指定初始值，則其值為該記憶體配置時的原始數值。 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int* ptr = &i;
    printf("The initial value of i is %d.\n", i);
    printf("The memory location of variable i : %p \n", ptr);
    printf("Assign a new number to i : ");
    scanf("%d",&i);
    printf("Now, the number for i has been updated to %d.\n\n",*ptr);
    
    system("PAUSE");
    return 0;
}
