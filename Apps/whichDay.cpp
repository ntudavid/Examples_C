// which day of the week is this date ?
// 08/09/2016 David Hsu

#include <stdio.h>
#include <stdlib.h>

bool checkLeapYear(int y){ // check the year if it is a leap year
     if(y % 400 == 0){
         return true;
     }
     else if(y % 100 == 0){
         return false;
     }
     else if(y % 4 == 0){
         return true;
     }
     else{
         return false;
     }
}

void printOut(int y, int m, int d, int day){
     printf("\n");
     printf("%4d/%2d/%2d is on ", y,m,d);
     
     switch(day){
        case 0:
          printf("Sunday.\n");
          break;
        case 1:
          printf("Monday.\n");
          break;
        case 2:
          printf("Tuesday.\n");
          break;
        case 3:
          printf("Wednesday.\n");
          break;
        case 4:
          printf("Thursday.\n");
          break;
        case 5:
          printf("Friday.\n");
          break;
        case 6:
          printf("Saturday.\n");
          break;
     }
     printf("\n");

}

int main(){
    int firstDay;
    int year, month, date, day;
    int iteration;
    int dayNum[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int dayNumLeap[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    
    char c;
    
    while(true){
        firstDay = 5; // 01/01/2016
        
        printf("Enter the month/date/year : ");
        scanf("%d/%d/%d", &month, &date, &year);
        scanf("%c", &c);

        // 
        if(year<2016){
            for(int y=year; y<2016; y++){
               if(checkLeapYear(y)){
                   firstDay = (firstDay + 5) % 7; // firstDay = (firstDay - 2 + 7) % 7;
               }
               else{ // not a leap year
                   firstDay = (firstDay + 6) % 7; // firstDay = (firstDay - 1 + 7) % 7;
               }
             }
        }
        else{ // year >= 2016
            for(int y=2016; y<year; y++){
                if(checkLeapYear(y)){
                    firstDay = (firstDay + 2) % 7; 
                }
                else{ // not a leap year
                    firstDay = (firstDay + 1) % 7; 
                }
             }
         }
    
         if(month<1 || month>12){
             printf("Invalid Month \n");
         }
         else{
             // 2 scenarios : leap or not
             if(checkLeapYear(year)){
                 if(date<1 || date>dayNumLeap[month-1]){
                    printf("Invalid Date \n");
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
                     printOut(year, month, date, day);    
                 }
             }
             else{ // not a leap year
                 if(date<1 || date>dayNum[month-1]){
                    printf("Invalid Date \n");
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
                     printOut(year, month, date, day);   
                 }
             }
        }
        
        printf("\n"); 
        
        printf("Do you still want to query again? Y/N :");
        scanf("%c", &c);
        
        if(c =='Y' || c == 'y'){
                  
        }
        else{
             break;
        }
        printf("\n");
            
    }         
    
            
    system("PAUSE");
    return 0;
}
