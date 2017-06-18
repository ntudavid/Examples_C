// test12: 陣列的宣告 

#include <stdio.h>
#include <stdlib.h>

void print_arr(int a[], int len){
     if(a!=NULL){
        printf("len = %d\n",len);
     
        for(int i=0; i<len; i++){
           printf("%3d  ",a[i]);
        }
        printf("\n");
     }   
}

int main(){
    
    //未初始化的陣列元素，其值為原本儲存在分配記憶體位置中的資料 
    int arr1[8];
    //剩下未初始化的元素自動補零 
    int arr2[9] = {0,1,2,3,4};
    //剩下未初始化的元素自動補零 
    int arr3[10] = {0};
    
    int len;
    
    printf("size of arr1 is %d\n", sizeof(arr1));
    printf("length of arr1 is %d\n", len = sizeof(arr1)/sizeof(int));
    print_arr(arr1, len);
    printf("\n");
    
    printf("size of arr2 is %d\n", sizeof(arr2));
    printf("length of arr2 is %d\n", len = sizeof(arr2)/sizeof(int));
    print_arr(arr2, len);
    printf("\n");
    
    printf("size of arr3 is %d\n", sizeof(arr3));
    printf("length of arr3 is %d\n", len = sizeof(arr3)/sizeof(int));
    print_arr(arr3, len);
    printf("\n");
    
    // double
    double arr_d[5] = {3.1415, 2.71828, 1.414, 1.732 };
    printf("size of arr_d is %d\n", sizeof(arr_d));
    printf("length of arr_d is %d\n", len = sizeof(arr_d)/sizeof(double));
    
    for(int i = 0; i<len; i++){
        printf("%2f  ", arr_d[i]);
    } 
    printf("\n\n");
    
    // 2-D array
    int arr2d[2][3]={{1,2},{3,4}}; //{{1,2,0}, {3,4,0}}
    int row, col;
    printf("size of arr2d is %d\n", sizeof(arr2d));
    printf("length of arr2d is %d\n", len = sizeof(arr2d)/sizeof(int));
    printf("size of arr2d[0] is %d\n", sizeof(arr2d[0]));
    printf("col of arr2d is %d\n", col = sizeof(arr2d[0])/sizeof(int));
    printf("row of arr2d is %d\n", row = len/col);
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d  ", arr2d[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // double
    double arr2dd[3][2]={{0}}; //{{0, 0},{0, 0},{0, 0}}
    printf("size of arr2dd is %d\n", sizeof(arr2dd));
    printf("length of arr2d is %d\n", len = sizeof(arr2dd)/sizeof(double));
    printf("size of arr2d[0] is %d\n", sizeof(arr2dd[0]));
    printf("col of arr2d is %d\n", col = sizeof(arr2dd[0])/sizeof(double));
    printf("row of arr2d is %d\n", row = len/col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%f  ", arr2dd[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    system("pause");
    return 0;
}
