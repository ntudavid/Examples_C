// HW4
#include <stdlib.h>
#include <stdio.h>


int gcd2(int a, int b){
    int r;
    while(r=a%b){
        a=b;
        b=r;             
    }
    return b;
}

int gcd3(int a, int b, int c){
    return gcd2(gcd2(a,b), c);
}


int value(int type, int width, int height, int length){
    
        int unit = gcd3(width, height, length); 
        int num = (width/unit)*(height/unit)*(length/unit);
        int unitPrice = 0;
        switch(type){
            case 79:
                unitPrice = 30;
                if(width <= 0 || height <= 0 || length <= 0){
                      return -2;
                }
                return unitPrice*(unit*unit*unit)*(unit*unit*unit)*num;
                //break;
            case 47:
                unitPrice = 10;
                if(width <= 0 || height <= 0 || length <= 0){
                      return -2;
                }
                return unitPrice*(unit*unit*unit)*(unit*unit*unit)*num;
                //break;
            case 29:
                unitPrice = 4;
                if(width <= 0 || height <= 0 || length <= 0){
                      return -2;
                }
                return unitPrice*(unit*unit*unit)*(unit*unit*unit)*num;
                //break;
            case 82:
                unitPrice = 5;
                if(width <= 0 || height <= 0 || length <= 0){
                      return -2;
                }
                return unitPrice*(unit*unit*unit)*(unit*unit*unit)*num;
                //break;
            case 26:
                unitPrice = 3;
                if(width <= 0 || height <= 0 || length <= 0){
                      return -2;
                }
                return unitPrice*(unit*unit*unit)*(unit*unit*unit)*num;
                //break;
            case 22:
                unitPrice = 9;
                if(width <= 0 || height <= 0 || length <= 0){
                      return -2;
                }
                return unitPrice*(unit*unit*unit)*(unit*unit*unit)*num;
                //break;
            default:
                return -1;         
        }
}

int main(){
    
    int type, width, height, length;
    
    scanf("%d%d%d%d", &type, &width, &height, &length);
    printf("%d\n\n", value(type, width, height, length));
    
    system("PAUSE");
    return 0;
}
