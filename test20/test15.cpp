// test15: 字串

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // 預留20個字元的空間 
    char str1[20] = "I am David.";
    printf("sizeof(str1) = %d  strlen(str1) = %d  str1 = %s\n", sizeof(str1), strlen(str1), str1);
    // modify some character
    str1[5]='J', str1[6]='o',str1[7]='h',str1[8]='n',str1[9]='n',str1[10]='y',str1[11]='.';
    printf("sizeof(str1) = %d  strlen(str1) = %d  str1 = %s\n", sizeof(str1), strlen(str1), str1);
    
    // 編譯器配置字元數+1('\0')的空間 
    char str2[] = "I am David.";
    printf("sizeof(str2) = %d  strlen(str2) = %d  str2 = %s\n", sizeof(str2), strlen(str2), str2);
    // modify some character
    str2[5]='J', str2[6]='o',str2[7]='h',str2[8]='n',str2[9]='n',str2[10]='y',str2[11]='.', 
    //str2[5]='J', str2[6]='o',str2[7]='h',str2[8]='n',str2[9]='n',str2[10]='y',str2[11]='.', str2[12]='\0';
    printf("sizeof(str2) = %d  strlen(str2) = %d  str1 = %s\n", sizeof(str2), strlen(str2), str2);
    
    // 編譯器將字元陣列存至唯讀記憶體 
    char* str3 = "I am David.";
    printf("sizeof(str3) = %2d  strlen(str3) = %d  str3 = %s\n", sizeof(str3), strlen(str3), str3);
    // modify some character -- caused RunTime Error, try to change value in Read Only Memory 
    //str3[5]='J';
    //printf("sizeof(str3) = %2d  strlen(str3) = %d  str3 = %s\n", sizeof(str3), strlen(str3), str3);
    
    system("PAUSE");
    return 0;
}
