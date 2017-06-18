// test19: File I/O --> csvRead, csvWrite

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void csvWrite(char* name, double* arr, int m, int n){
    double* ptr = arr;
    FILE* fp;
    fp = fopen(name,"w");
    assert(fp);
    for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
           fprintf(fp, "%lf", *ptr);
           if(j==n-1){
              fprintf(fp,"\n");
           }
           else{
              fprintf(fp,","); 
           }
           ptr++;
       }
    }
    fclose(fp);
}

double** csvRead(char* name, int &row, int &col){
    double value; 
    char mark;
    row = 0;
    col = 0;
    FILE* fp;
    fp = fopen(name,"r");
    assert(fp);
    while(fscanf(fp, "%lf%c", &value, &mark) != EOF){
       col++;
       if(mark == '\n'){
           row++;
       }
    }
    col = col/row;
    fclose(fp);
    
    // dynamic memory allocation
    double** arr = (double**)malloc(sizeof(double*)*row);
    for(int i=0; i<row; i++){
        arr[i] = (double*)malloc(sizeof(double)*col);
    }
    // read data to array
    fp = fopen(name,"r");
    assert(fp);
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
           fscanf(fp, "%lf%c", &arr[i][j], &mark);
       }
    }
    fclose(fp);
    return arr;
}


int main(){
    // 精準到小數點後6位 
    double arrd[6][2]={{1.414, 1.732},{3.1415, 2.71828},{123.999999, 1.0},{2, 4},{-1.234, -5.678}};
    int m =6;
    int n =2;
    char fileName[] = "workOnCSV.csv";
    double* ptr = &(arrd[0][0]);
    csvWrite(fileName, ptr, m, n);
    
    int row, col;
    double** arr = csvRead(fileName, row, col);
    
    // check data in array
    printf("Check data \n");
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
          printf("%f ", arr[i][j]);
       }
       printf("\n");
    }
    
    system("PAUSE");
    return 0;
    
}
