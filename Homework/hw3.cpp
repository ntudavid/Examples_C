// HW3 Bingo

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    int*** ptr = (int***)malloc(sizeof(int**)*n);
    // declare a n*m*m array
    for(int i=0; i<n; i++){
        ptr[i] = (int**)malloc(sizeof(int*)*m); 
        for(int j=0; j<m; j++){
                ptr[i][j] = (int*)malloc(sizeof(int)*m);
        }       
    }
   
    // for loop for receiving n m*m arrays
    for(int g=0; g<n; g++){
        printf("Gamer No.%d :\n", g);
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                 scanf("%d", &ptr[g][i][j]);
            }
        }
    }
    // sequence of calling numbers  
    int* callingNum = (int*)malloc(sizeof(int)*m*m);
    printf("Sequence of calling numbers : \n");
    for(int i=0; i<m*m; i++){
         scanf("%d", &callingNum[i]);
    }
    
    // undating and checking
    // for each call
    for(int num=0; num<m*m; num++){
        //update for each gamer
        bool bingo;
        bool firstBingo = true;
        for(int g=0; g<n; g++){
            // mark the number just called
            for(int i=0; i<m; i++){
                for(int j=0; j<m; j++){
                    if(ptr[g][i][j]==callingNum[num]){
                         ptr[g][i][j] = 0;
                    }
                }    
            }
            // check if bingo
            // check row
            for(int r=0; r<m; r++){
                bingo = true;
                for(int j=0; j<m; j++){
                    if(ptr[g][r][j]!=0){
                        bingo = false;
                        break;                
                    }
                }
                if(bingo){
                    break;
                }    
            }
            if(bingo && firstBingo){
                printf("%d ", callingNum[num]);
                firstBingo = false;
            }
            if(bingo){
                printf("%d ", g);
                continue;
            }
            
            // check col
            for(int c=0; c<m; c++){
                bingo = true;
                for(int i=0; i<m; i++){
                    if(ptr[g][i][c]!=0){
                        bingo = false;
                        break;                
                    }
                }
                if(bingo){
                    break;
                }    
            }
            if(bingo && firstBingo){
                printf("%d ", callingNum[num]);
                firstBingo = false;
            }
            if(bingo){
                printf("%d ", g);
                continue;
            }
            // check diagonal-1
            for(int d=0; d<m; d++){
                bingo = true;
                if(ptr[g][d][d]!=0){
                     bingo = false;
                     break;
                }   
            }
            if(bingo && firstBingo){
                printf("%d ", callingNum[num]);
                firstBingo = false;
            }
            if(bingo){
                printf("%d ", g);
                continue;
            }
            // check diagonal-2
            for(int d=0; d<m; d++){
                bingo = true;
                if(ptr[g][d][m-1-d]!=0){
                     bingo = false;
                     break;
                }   
            }
            if(bingo && firstBingo){
                printf("%d ", callingNum[num]);
                firstBingo = false;
            }
            if(bingo){
                printf("%d ", g);
            }
            
        } //for(int g=0; g<n; g++){
        if(firstBingo == false){
            break;
        }
        
    }//for(int num=0; num<m*m; num++){
    
    system("PAUSE");
    return 0;   
}
