// test6 : ��Ʒ���C�Y�ƭȤj��pow(2,31)-1�A�h�o�ͷ���A�ƭ��ܬ���G���B���G�ɼƪ����G�C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // �̤j���+1�Უ�ͷ��� 
    int maxIntegerNumber = int(pow(2,31)-1);
    printf("Max integer number is %d.\n", maxIntegerNumber);
    printf("Overflow occurs when Max integer + 1 : %d\n\n", maxIntegerNumber + 1);
    
    // ��l�ȶW�L�̤j�ȮɡA����ܬ��ƭ��ഫ���G�i���ܮɥΤG�ɼƧPŪ�����G 
    int anInteger = 2147483648;
    printf("An integer with initialization of 2147483648 becomes : %d\n", anInteger);
    anInteger = 2147483649;
    printf("An integer with initialization of 2147483649 becomes : %d\n\n", anInteger);
    
    // integer�j���ഫ�A�W�L�̤j�Ȯɨϥγ̤j�Ȩ��N�H�����o�� 
    int anInteger_1 = int(2147483647.0);
    int anInteger_2 = int(2147483648.0);
    int anInteger_3 = int(2147483649.0);
    printf("Convert a number 2147483647.0 to integer : %d\n", anInteger_1);
    printf("Convert a number 2147483648.0 to integer : %d\n", anInteger_2);
    printf("Convert a number 2147483649.0 to integer : %d\n\n", anInteger_3);
    
    system("PAUSE");
    return 0;
    
}
