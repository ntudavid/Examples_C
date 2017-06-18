// test16: ¨ç¼Æ -> call by value, call by address, call by reference

#include <stdio.h>
#include <stdlib.h>

void callByValueX2(int c, int d){
    printf("In the function : call_by_value\n");
    c = 2*c;
    d = 2*d;
    printf("Var c : Memory allcation at %p   Value = %d\n",&c, c);
    printf("Var d : Memory allcation at %p   Value = %d\n",&d, d);
}

void callByAddressX2(int* c, int* d){
    printf("In the function : call_by_address\n");
    *c = 2*(*c);
    *d = 2*(*d);
    printf("Var *c : Memory allcation at %p   Value = %d\n", c, *c);
    printf("Var *d : Memory allcation at %p   Value = %d\n", d, *d);
}

void callByReferenceX2(int &c, int &d){
    printf("In the function : call_by_value\n");
    c = 2*c;
    d = 2*d;
    printf("Var c : Memory allcation at %p   Value = %d\n",&c, c);
    printf("Var d : Memory allcation at %p   Value = %d\n",&d, d);
}

void passArray(int arr[], int n){
     printf("sizeof(arr) = %d\n", sizeof(arr));
     printf("arr = %p\n", arr);
     printf("&arr = %p\n", &arr);
     printf("*arr = %d\n", *arr);
     for(int i=0; i<n; i++){
         printf("%d  ", arr[i]);    
     }
     printf("\n");
}

void passArrayPtr(int* arrPtr, int n){
     printf("sizeof(arrPtr) = %d\n", sizeof(arrPtr));
     printf("arrPtr = %p\n", arrPtr);
     printf("&arrPtr = %p\n", &arrPtr);
     printf("*arrPtr = %d\n", *arrPtr);
     for(int i=0; i<n; i++){
         printf("%d  ", arrPtr[i]);    
     }
     printf("\n");
}

void passArrayPtrRef(int* &arr, int n){
     printf("sizeof(arr) = %d\n", sizeof(arr));
     printf("arr = %p\n", arr);
     printf("&arr = %p\n", &arr);
     printf("*arr = %d\n", *arr);
     for(int i=0; i<n; i++){
         printf("%d  ", arr[i]);    
     }
     printf("\n");
}

int main(){
    
    int a=5, b= 10;
    printf("Initial values of a and b\n");
    printf("Var a : Memory allcation at %p   Value = %d\n",&a, a);
    printf("Var b : Memory allcation at %p   Value = %d\n",&b, b);
    printf("\n");
    
    callByValueX2(a, b);
    printf("After a call_by_value function\n");
    printf("Var a : Memory allcation at %p   Value = %d\n",&a, a);
    printf("Var b : Memory allcation at %p   Value = %d\n",&b, b);
    printf("\n");
    
    callByAddressX2(&a, &b);
    printf("After a call_by_value function\n");
    printf("Var a : Memory allcation at %p   Value = %d\n",&a, a);
    printf("Var b : Memory allcation at %p   Value = %d\n",&b, b);
    printf("\n");
    
    callByReferenceX2(a, b);
    printf("After a call_by_value function\n");
    printf("Var a : Memory allcation at %p   Value = %d\n",&a, a);
    printf("Var b : Memory allcation at %p   Value = %d\n",&b, b);
    printf("\n");
    
    int array[5]={1,2,3,4,5};
    printf("1 \n");
    printf("sizeof(array) = %d\n", sizeof(array));
    printf("array = %p\n", array);
    printf("&array = %p\n", &array);
    printf("*array = %d\n", *array);
    printf("\n");
    
    printf("2 \n");
    passArray(array,5);
    printf("\n");
    
    int* ptr = array;
    printf("3 \n");
    printf("sizeof(ptr) = %d\n", sizeof(ptr));
    printf("ptr = %p\n", ptr);
    printf("&ptr = %p\n", &ptr);
    printf("*ptr = %d\n", *ptr);
    printf("\n");
    
    printf("4 \n");
    passArrayPtr(ptr,5);
    printf("\n");
    
    printf("5 \n");
    passArrayPtrRef(ptr,5);
    printf("\n");
    
    system("PAUSE");
    return 0;
    
}
