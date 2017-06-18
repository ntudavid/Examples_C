// HW 1

#include <stdio.h>
#include <stdlib.h>

int main(){
    int h,w,d;
    scanf("%d%d%d", &h, &w, &d);
    int vol = h*w*d;
    int surfaceArea = 2*(h*w+w*d+d*h);
    
    printf("%d  %d", surfaceArea, vol);
    printf("\n");
    
    system("PAUSE");
    return 0;    
    
}
