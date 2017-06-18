// test2 : 連續使用scanf讀取數值。輸入時可使用空格或enterr鍵區分。

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k;
    printf("Enter three number : ");
    scanf("%d%d%d",&i,&j,&k);
    printf("\nThe three numbers are %d, %d, and %d.\n\n",i,j,k);
    
    system("PAUSE");
    return 0;
}
