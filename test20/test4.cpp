// test4 : �ϥ�scanfŪ���S�w�榡�����ѼƭȡC�Y��J�ɨS����q�榡�A�h�|�ɭPŪ�����ѡC

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
