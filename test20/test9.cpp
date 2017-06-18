// test9 : °j°é -> for, while, do...while

#include <stdio.h>
#include <stdlib.h>

int main(){
    // sum = 1+2+3+...+n
    int n;
    int sum = 0;
    printf("Given a positive integer : ");
    scanf("%d", &n);
    for(int i=0;i<=n;++i){
         sum = sum + i;
    }
    printf("Summation from 1 to %d is %d.\n", n, sum);
    
    // gcd(a,b)
    int a, b, r;
    int gcd;
    do{
        printf("Enter two positive integer : ");
        scanf("%d%d", &a, &b);
    }while(a<0 || b<0);
    printf("GCD(%d,%d)= ", a, b);
    // Euclidean Algorithm gcd(a,b)=gcd(b,r) where r = a%b
    /*
    while(1){
        r = a%b;
        if(r==0){
           gcd = b;
           break;
        } 
        a = b;
        b = r;
    }
    */
    
    while(r=a%b){
        a = b;
        b = r;
        printf("GCD(%d,%d)= ", a, b);     
    }
    gcd = b;
    printf("%d\n\n", gcd);
    
    system("PAUSE");
    return 0;
}
