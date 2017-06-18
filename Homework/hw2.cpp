// HW 2 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int year, month, date, day, firstDay;
    int iteration;
    int dayNum[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int dayNumLeap[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    bool leap = 0;
    scanf("%d%d",&year, &firstDay);
    scanf("%d", &iteration);
    // check the year if it is a leap year
    if(year%400 == 0){
        leap = 1;
    }
    else if(year%100 == 0){
        leap = 0;
    }
    else if(year%4 == 0){
        leap = 1;
    }
    else{
        leap = 0;
    }
    //
    for(int i=0; i<iteration; i++){
        scanf("%d%d", &month, &date);
        if(month<1 || month>12){
            printf("-1  ");
        }
        else{
        // 2 scenarios : leap or not
           if(leap){
               if(date<1 || date>dayNumLeap[month-1]){
                    printf("-2  ");
               }
               else{
                    // start counting
                    day = firstDay;
                    for(int i=1; i<month; i++){
                        day += dayNumLeap[i-1];
                    }
                    day += date-1;
                    // answer
                    day = day%7;
                    printf("%d  ", day);   
               }
           }
           else{
               if(date<1 || date>dayNum[month-1]){
                    printf("-2  \n");
               }
               else{
                    // start counting
                    day = firstDay;
                    for(int i=1; i<month; i++){
                        day += dayNum[i-1];
                    }
                    day += date-1;
                    // answer
                    day = day%7;
                    printf("%d  ", day);   
               }
           }
        }
        printf("\n");
            
    }
    
    system("PAUSE");
    return 0;
}
