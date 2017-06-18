// test13: 陣列與指標 (1維)

#include <stdio.h>
#include <stdlib.h>

int main(){

    
    //剩下未初始化的元素自動補零 
    int arr[8] = {0,1,2,3,4};
    int len = 8;
    int i;
    // 陣列的記憶體配置與值 
    for(i=0; i<len; i++){
         printf("index[%d]  memory[%p]  value = %d \n", i, &arr[i], arr[i]);
    }
    printf("\n");

    // 指標與陣列的關係
    // ptr = arr <=>  arr[i] = *(ptr+i) = ptr[i]
    printf("arr = %p \n", arr);
    printf("memory of arr = %p \n", &arr);
    int* ptr = arr;
    printf("ptr = %p \n", ptr);
    printf("memory of ptr = %p \n", &ptr);
    printf("value of *ptr = %d \n", *ptr);
    printf("value of ptr[0] = %d \n", ptr[0]);
    printf("value of &*ptr = %p \n", &*ptr);
    printf("value of &ptr[0] = %p \n", &ptr[0]);
    printf("\n");
    
    for(i = 0; i<len; i++){
         printf("index[%d]  memory[%p]  value = %d \n", i, ptr, ptr[i]);
    }
    printf("\n\n");
    
    for(i = 0,ptr = arr; i<len; i++,ptr++){
         printf("index[%d]  memory[%p]  value = %d \n", i, ptr, *ptr);
    }
    printf("\n\n");
    
    // ptr = &arr[i] => ptr[j]=arr[i+j]
    ptr = &arr[2];
    for(i=0; i<len-2; i++){
         printf("index[%d]  memory[%p]  value = %d \n", i, ptr[i], ptr[i]);
    }
    printf("\n");
    
    // 動態配置記憶體
    int* a = (int*)malloc(sizeof(int)*8);
    len = 8;
    for(int i = 0; i<len; i++){
        a[i]=i;
    }
    
    printf("a = %p \n", a);
    printf("memory of a = %p \n", &a);
    printf("\n");
    
    for(int i = 0; i<len; i++){
        printf("index[%d]  memory[%p]  value = %d \n", i, &a[i], a[i]);
    }
    printf("\n");
    
    int* p; 
    for(i = 0, p = a; i<len; i++, p++){
        printf("index[%d]  memory[%p]  value = %d \n", i, p, *p);
    }
    printf("\n\n");
    
    system("pause");
    return 0;
}
