// test1 : �p�G�ŧi�ܼƨS�����w��l�ȡA�h��Ȭ��ӰO����t�m�ɪ���l�ƭȡC 

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
