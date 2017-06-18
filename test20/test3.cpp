// test3 : scanf中對於double型態必須使用 %lf (long floating)，若使用%f則導致讀取失敗，變數維持原本的數值。

#include <stdio.h>
#include <stdlib.h>

int main(){
    // 若輸入非整數給x，則在此例中scanf會只取整數部分指定給x，將小數部分留給第二次scanf指定給y 
    int x;
    double y;
    float* ptr;
    
    printf("The original value of x is %d.\nUpdate its value to : ",x);
    scanf("%d",&x);
    printf("The original value of y is %f.\nUpdate its value to : ",y);
    // scanf中對於double型態須使用 %lf (long floating): 將數值寫入記憶體中的8個bytes 
    scanf("%lf",&y);
    printf("x = %d and y = %f => x + y = %f\n",x,y,x+y);
    
    ptr = (float*)&y;
    printf("The value for last 4 significant bytes of y is %f \n\n", *ptr);
    
    printf("The value of y is %f.\nChange its value to : ",y);
    // scanf中對於double型態若使用 %f，則會將數值寫入該記憶體位置中的4個bytes
    // 結果改變64位元中後32位元的二進位值，造成最後數值(64位元整體)有些許改變 
    scanf("%f",&y);
    printf("x = %d and y = %f => x + y = %f\n",x,y,x+y);
    
    ptr = (float*)&y;
    printf("the value for 4 bytes y is %f \n\n", *ptr);
    
    system("PAUSE");
    return 0;
    
}
