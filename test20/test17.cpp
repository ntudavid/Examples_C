// test17: À³¥Î -> exponential/sin/cos function, bubble sort, gcd, check_prime

#include <stdio.h>
#include <stdlib.h>

double exp(double x){
    double exp = 1;
    double term = 1;
    int iteration = 20; // precision level
    // Taylor Series : exp^x = 1 + x/1! + x^2/2! + x^3/3! + ....
    for(int i=1; i<=iteration; i++){
        term *= x/i; //term = term*x/i; 
        exp += term; //exp = exp + term;     
    }
    return exp;   
}

double sin(double x){
    double sin = x;
    double term = x;
    int iteration = 20; // precision level
    // Taylor Series : sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
    for(int i=1; i<=iteration; i++){
        term *= (-1)*x*x/(2*i)/(2*i+1);  
        sin += term; //sin = sin + term;     
    }
    return sin;    
}

double cos(double x){
    double cos = 1;
    double term = 1;
    int iteration = 20; // precision level
    // Taylor Series : cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...
    for(int i=1; i<=iteration; i++){
        term *= (-1)*x*x/(2*i)/(2*i-1); 
        cos += term; //cos = cos + term;     
    }
    return cos; 
}

void bubbleSort(int* arr, int num){
     for(int i=num-1; i>0; i--){
         for(int j=0; j<i; j++){
             int temp;
             if(arr[j]>arr[j+1]){
                 temp = arr[j+1];
                 arr[j+1] = arr[j];
                 arr[j] = temp;
             }
         }        
     }
}

int gcd(int a, int b){
    int r;
    while(r=a%b){ // gcd(a,b) = gad(b,r) r=a%b
       a = b;
       b = r;         
    }
    return b;   
}

bool checkPrime(int num){
     bool prime = 1;
     for(int i=2; i*i<=num; i++){
         if(num%i==0){
            prime = 0;
            break;
         }
     }
     return prime;
}

int main(){
    
    double pwr = 1.5;
    printf("Exponential of %f = %f \n", pwr, exp(pwr));
    
    double thita = 1.732;
    printf("sin(%f) = %f \n", thita, sin(thita));
    
    printf("cos(%f) = %f \n", thita, cos(thita));
    
    int a[10] = {4,3,2,5,7,1,9,8,0,6};
    int len = 10;
    printf("Before sorting : ");
    for(int i=0; i<len; i++){
        printf("%d  ", a[i]);    
    }
    printf("\n");
    bubbleSort(a, len);
    printf("After sorting : ");
    for(int i=0; i<len; i++){
        printf("%d  ", a[i]);    
    }
    printf("\n");
    
    int num1 = 75;
    int num2 = 383;
    printf("The greatest common divider of %d and %d is %d", num1, num2, gcd(num1,num2));
    printf("\n");
    
    int num = 8191;
    if(checkPrime(num)){
        printf("The number %d is a prime number.\n", num);
    }
    else{
        printf("The number %d is NOT a prime number.\n", num);
    }
    
    system("PAUSE");
    return 0;
}
