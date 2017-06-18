// test18: »¼°j -> fibonacci, summation, factorial, gcd

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int f){
    if(f<=0){
       return 0;
    }
    else if(f==1){
       return 1;
    }
    else{
       return fibonacci(f-1)+fibonacci(f-2);  
    }
}

int fibonacci_it(int f){
    int fib;
    int fib0 = 0;
    int fib1 = 1;
    if(f==0){
       return fib0;
    }
    else if(f==1){
       return fib1;
    }
    else{
       for(int i=2; i<=f; i++){
          fib = fib1 + fib0;
          fib0 = fib1;
          fib1 = fib;
       }
       return fib;
    } 
}

int summation(int n){
    if(n<=0){
        return 0;
    }
    else{
        return summation(n-1)+n;
    }        
}

int summation_it(int n){
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum += i; // sum = sum + i;
    }
    return sum;   
}

int factorial(int n){
    if(n <= 0){
        return 1;
    }
    else{
        return n*factorial(n-1); 
    }     
}

int factorial_it(int n){
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact*i;
    }
    return fact;  
}

int gcd(int a, int b){
    if(a%b==0){
       return b;
    }
    else{
       return gcd(b,a%b);
    }
}

int gcd_it(int a, int b){
    int r;
    while(r=a%b){
       a=b;
       b=r;
    }
    return b;
}

int main(){
    
    int fib = 44;
    printf("Fib(%d) = %d \n", fib, fibonacci(fib));
    printf("Fib(%d) = %d \n", fib, fibonacci_it(fib));
    
    
    for(int i=0; i<10; i++){
        printf("%d  ", fibonacci(i));
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d  ", fibonacci_it(i));
    }
    printf("\n");
    
    int n = 100;
    printf("Summation from 1 to %d is %d \n", n, summation(n));
    printf("Summation from 1 to %d is %d \n", n, summation_it(n));
    
    int f = 10;
    printf("Factorial of %d is %d \n", f, factorial(f));
    printf("Factorial of %d is %d \n", f, factorial_it(f));
    
    int num1 = 21;
    int num2 = 354;
    printf("The greatest common divider of (%d , %d) is %d \n", num1, num2, gcd(num1, num2));
    printf("The greatest common divider of (%d , %d) is %d \n", num1, num2, gcd_it(num1, num2));
    
    
    system("PAUSE");
    return 0;
}
