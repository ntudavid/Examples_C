// SUDOKU solver

#include <stdio.h>
#include <stdlib.h>

bool sudokuSolver(int s[9][9], int row, int col){
     
     //printf("sizeof(s) = %d\n", sizeof(s));
     //printf("&s = %p\n", &s);
     
     //printf("(%d,%d) ", row, col);
     
     if(row==9){
         // solver all the entries       
         return true;
     }
     else{
         if(s[row][col]!=0){ // given entry
              return sudokuSolver(s, row+(col+1)/9, (col+1)%9);
         }
         else{ // to be determined entry
              for(int guess=1; guess<=9; guess++){
                  bool ok = true;
                  // check row and col
                  for(int i=0; i<9; i++){
                      if(s[i][col]==guess || s[row][i]==guess){
                          ok = false;
                          break;
                      }
                  }
                  // if pass row/col check, then check 3x3
                  if(ok){
                      int R = 3*(row/3);
                      int C = 3*(col/3);
                      for(int a=0; a<3; a++){
                          for(int b=0; b<3; b++){
                              if(s[R+a][C+b]==guess){
                                  ok = false;
                                  break;
                              }
                          }
                          if(ok==false){
                              break;
                          }
                      }
                  }
                  // if pass 3x3 check, then "guess" may be promising and check sudokuSolver(s, row+(col+1)/9, (col+1)%9)
                  if(ok){
                      s[row][col]=guess;
                      if( sudokuSolver(s, row+(col+1)/9, (col+1)%9)== false ){ // this guess finally couldn't work
                           s[row][col]=0; // change back to be undetermined
                      }
                      else{
                           return true;
                      } 
                  }
              } // for(int guess=1; guess<=9; guess++)
              return false;      
              //return sudokuSolver(s, row+(col+1)/9, (col+1)%9);  
         } 
     }          
}


int main(){
    /*
    int sudoku[9][9] ={ { 0, 0, 0, 5, 0, 6, 0, 0, 0},
                      { 1, 0, 7, 0, 0, 0, 5, 9, 2},
                      { 5, 0, 4, 0, 1, 7, 6, 0, 0},
                      { 8, 0, 0, 0, 0, 9, 0, 4, 0},
                      { 9, 0, 0, 3, 6, 4, 0, 0, 7},
                      { 0, 4, 0, 2, 0, 0, 0, 0, 9},
                      { 0, 0, 5, 8, 9, 0, 1, 0, 4},
                      { 2, 9, 8, 0, 0, 0, 7, 0, 5},
                      { 0, 0, 0, 7, 0, 2, 0, 0, 0} };
                      
    
    
    int sudoku[9][9] ={ { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0} };
    */

                        
    int sudoku[9][9] ={ { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0},
                        { 0, 0, 0,   0, 0, 0,   0, 0, 0} };

    printf("Enter the sudoku question, put zero if the entry is undetermined: \n");
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d", &sudoku[i][j]);
        }
    }
    printf("\n");                  
    // print out the sudoku question
    printf("The sudoku question: \n");
    for(int i=0;i<9;i++){
       for(int j=0;j<9;j++){
           printf("%d ",sudoku[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    
    //printf("sizeof(sudo) = %d\n", sizeof(sudo));
    //printf("&sudo = %p\n", &sudo);
    
    if(sudokuSolver(sudoku, 0, 0)){
        printf("After solver:\n");
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
               printf("%d ",sudoku[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    else{
         printf("No solution! \n");
    }
    printf("\n");
    
    system("PAUSE");
    return 0;
    
}
