// test3 : scanf�����double���A�����ϥ� %lf (long floating)�A�Y�ϥ�%f�h�ɭPŪ�����ѡA�ܼƺ����쥻���ƭȡC

#include <stdio.h>
#include <stdlib.h>

int main(){
    // �Y��J�D��Ƶ�x�A�h�b���Ҥ�scanf�|�u����Ƴ������w��x�A�N�p�Ƴ����d���ĤG��scanf���w��y 
    int x;
    double y;
    float* ptr;
    
    printf("The original value of x is %d.\nUpdate its value to : ",x);
    scanf("%d",&x);
    printf("The original value of y is %f.\nUpdate its value to : ",y);
    // scanf�����double���A���ϥ� %lf (long floating): �N�ƭȼg�J�O���餤��8��bytes 
    scanf("%lf",&y);
    printf("x = %d and y = %f => x + y = %f\n",x,y,x+y);
    
    ptr = (float*)&y;
    printf("The value for last 4 significant bytes of y is %f \n\n", *ptr);
    
    printf("The value of y is %f.\nChange its value to : ",y);
    // scanf�����double���A�Y�ϥ� %f�A�h�|�N�ƭȼg�J�ӰO�����m����4��bytes
    // ���G����64�줸����32�줸���G�i��ȡA�y���̫�ƭ�(64�줸����)���ǳ\���� 
    scanf("%f",&y);
    printf("x = %d and y = %f => x + y = %f\n",x,y,x+y);
    
    ptr = (float*)&y;
    printf("the value for 4 bytes y is %f \n\n", *ptr);
    
    system("PAUSE");
    return 0;
    
}
