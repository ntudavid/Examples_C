// test7 : §PÂ_¦¡ -> if...else if...else, switch, (cond)? com1:com2

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main(){
    float score;
    char grade = '\0';
    
    
    // if condition
    printf("Please enter the score for math : ");
    scanf("%f",&score);
    
    if(score>=90 && score<= 100){
         grade = 'A';
    }
    else if(score>=80 && score<90){
         grade = 'B';
    }
    else if(score>=70 && score<80){
         grade = 'C';
    }
    else if(score>=60 && score<70){
         grade = 'D';
    }
    else if(score>=0 && score<60){
         grade = 'F';
    }
    else{
         printf("The score is invalid.\n");
    }
    printf("The student got %c in math.\n", grade);
    
    // switch case --> expression should be an integer or a char (can not work for float nor string)
    switch(grade){
    case 'A':
         printf("Good for you. Keep going.\n");
         break;
    case 'B':
         printf("Not bad.\n");
         break;
    case 'C':
         printf("You can do better.\n");
         break;
    case 'D':
         printf("You need to work harder.\n");
         break;
    case 'F':
         printf("You are so dead.\n");
         break;
    default:
         printf("Did you take the exam?\n");
         break;   
    }
    
    printf("\n");
    system("PAUSE");
    return 0;
    
}
