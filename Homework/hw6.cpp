// HW6
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    
    char words[128];
    
    while(scanf("%s", words) != EOF){
         if(strcmp(words,"at")==0 || strcmp(words,"the")==0  || strcmp(words,"of")==0 || strcmp(words,"and")==0 ){
             continue;    
         }
         else{
            printf("%c", toupper(words[0]));
            if(words[strlen(words)-1] == '.'){
                printf("%c",' ');
            }    
         }                
    }
    
    system("PAUSE");
    return 0;
}
