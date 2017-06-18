// maze Solver

#include <stdio.h>
#include <stdlib.h>

#define row 6
#define col 6


bool mazeSolver(int maze[row][col], int entryR, int entryC){
     if(entryR==row-1 && entryC==col-1){
         maze[entryR][entryC] = 8;
         return true;
     }
     else{
         if( maze[entryR][entryC]==0 ){ // try four directions
              maze[entryR][entryC] = 8; // set to walked
              if(entryC+1<col){ // visit right
                  if( mazeSolver(maze, entryR, entryC+1) ){
                      return true;
                  }
              }
              if(entryR+1<row){ // visit down
                  if( mazeSolver(maze, entryR+1, entryC) ){
                      return true;
                  }
              }
              if(entryR>0){ // visit up
                  if( mazeSolver(maze, entryR-1, entryC) ){
                      return true;
                  }
              }
              if(entryC>0){ // visit left
                  if( mazeSolver(maze, entryR, entryC-1) ){
                      return true;
                  }
              }
              maze[entryR][entryC] = 0; // change back to path
              return false;
         }
         else{ // wall
              return false;
         }
     }
}


int main(){
    int maze[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
             if((float)rand()/RAND_MAX>=2.0/row){
                 maze[i][j]=0; // path
             }
             else{
                 maze[i][j]=1; // wall
             }
        }
    }
    maze[0][0]=0;
    maze[row-1][col-1]=0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%2d ", maze[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    if( mazeSolver( maze, 0, 0)){
        for(int i=0; i<row; i++){
           for(int j=0; j<col; j++){
               printf("%2d ", maze[i][j]);
           }
           printf("\n");
        }
    }
    else{
        printf("No solution.\n");
    }

    printf("\n");

    system("PAUSE");
    return 0;
}
