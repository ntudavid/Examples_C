// test14: 陣列與指標 (2維)

#include <stdio.h>
#include <stdlib.h>

int main(){

    
    //剩下未初始化的元素自動補零 
    int arr[3][4] = {{0,1,2},{3,2},{5}}; // {{0,1,2,0},{3,2,0,0},{5,0,0,0}}
    int row=3, col=4;
    
    // 陣列的記憶體配置與值 
    printf("2D array\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%p -> %d \t", &arr[i][j], arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("value of arr is %p \n", arr);
    printf("memory location of arr is %p \n", &arr);
    for(int i=0; i<row; i++){
        printf("arr[%d] -> %p (%p) -> size of arr[%d] = %d \n", i, arr[i], &arr[i] , i, sizeof(arr[i]));
    }
    printf("\n");
    
    // 指標與二維陣列
    int* ptr;
    // ptr = arr; 錯誤指定記憶體位置
    ptr = arr[0]; 
    printf("2D array using pointer\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%p -> %d \t", ptr, *ptr);
            ptr++;
        }
        printf("\n");
    }
    printf("\n"); 
    
    // 動態配置記憶體
    int** a = (int**)malloc(sizeof(int*)*row);
    printf("dynamically allocated 2D array\n");
    for(int i=0;i<row;i++){
        a[i] = (int*)malloc(sizeof(int)*col);
    }
    
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
           a[i][j] = 0;
       }
    }
    a[0][1]=1;
    a[0][2]=2;
    a[1][0]=3;
    a[1][1]=2;
    a[2][0]=5;
    // 
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
           printf("%p -> %d \t", &a[i][j], a[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    printf("value of a is %p \n", a);
    printf("memory location of a is %p \n", &a);
    for(int i=0; i<row; i++){
        printf("arr[%d] -> %p (%p) -> size of a[%d] = %d \n", i, a[i], &a[i] , i, sizeof(a[i]));
    }
    printf("\n");
    
    
 
    
    system("pause");
    return 0;
}
