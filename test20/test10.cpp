// test10: �j�餤�ϥ�break/continue���_�θ��X�j��C

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // break: ���X�j��
    int cnt = 0;
    for(int i=0;i<10;++i){
       for(int j=0;j<10;j++){
           if(i==j){
              break;
           }
           cnt++;
           printf("(%2d,%2d)",i,j);
       }
       printf("\n");
    }
    // 1+2+3+...+9 = 45 
    printf("The number of counting with \"break\" is %d.\n\n", cnt);
    
    // continue: ���L�j��ѤU�����A�^��j���Y�C 
    cnt = 0;
    for(int i=0;i<10;++i){
       for(int j=0;j<10;j++){
           if(i==j){
              printf("       ");
              continue;
           }
           cnt++;
           printf("(%2d,%2d)",i,j);
       }
       printf("\n");
    } 
    // 10*10-10 = 90
    printf("The number of counting with \"continue\" is %d.\n\n", cnt);
    
    system("PAUSE");
    return 0;
    
}
