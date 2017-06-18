// test6 : 俱计犯璝计pow(2,31)-1玥祇ネ犯计跑ㄤじ笲衡干计挡狦

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // 程俱计+1玻ネ犯 
    int maxIntegerNumber = int(pow(2,31)-1);
    printf("Max integer number is %d.\n", maxIntegerNumber);
    printf("Overflow occurs when Max integer + 1 : %d\n\n", maxIntegerNumber + 1);
    
    // ﹍禬筁程ㄤ陪ボ计锣传Θ秈ボノ干计弄挡狦 
    int anInteger = 2147483648;
    printf("An integer with initialization of 2147483648 becomes : %d\n", anInteger);
    anInteger = 2147483649;
    printf("An integer with initialization of 2147483649 becomes : %d\n\n", anInteger);
    
    // integer眏锣传禬筁程ㄏノ程ňゎ犯祇ネ 
    int anInteger_1 = int(2147483647.0);
    int anInteger_2 = int(2147483648.0);
    int anInteger_3 = int(2147483649.0);
    printf("Convert a number 2147483647.0 to integer : %d\n", anInteger_1);
    printf("Convert a number 2147483648.0 to integer : %d\n", anInteger_2);
    printf("Convert a number 2147483649.0 to integer : %d\n\n", anInteger_3);
    
    system("PAUSE");
    return 0;
    
}
