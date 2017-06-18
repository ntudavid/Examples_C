// test4 : 使用scanf讀取特定格式中的參數值。若輸入時沒有遵從格式，則會導致讀取失敗。

#include <stdio.h>
#include <stdlib.h>

int main(){
    int month = 12, date = 25, year = 0;
    printf("Date of birth (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &date, &year);
    printf("\n");
    printf("Your birthday is in year of %d.\n", year);
    printf("Your birthday is in month of %d.\n", month);
    printf("Your birthday is on date of %d.\n\n", date);
    
    system("PAUSE");
    return 0;
    
}
