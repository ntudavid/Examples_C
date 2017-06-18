// HW5
#include <stdlib.h>
#include <stdio.h>

void shuffle(int** deck){
     int* copy[1000];
     int index = 0;
     while(deck[index]!=NULL){
         copy[index]=deck[index];
         index++;
     }
     int indexCut = index - index/2;
     int* list1 = deck[0];
     int* list2 =  deck[indexCut];
     for(int i=0; i<indexCut; i++){
         if(i%2==0){
             deck[i] = copy[i/2];
         }
         else{ // i%2==1
             deck[i] = copy[indexCut+ i/2];
         }   
     }  
}

void print(int** deck){
     int index = 0;
     while(deck[index]!= NULL){
         printf("%d ", *deck[index]);
         index++;
     }
     printf("\n");
}

int main(){
    
    int card[10000];
    int* deck[10000];
    
    int index = 0;
    while(scanf("%d", &(card[index])) != EOF){
         deck[index] = &(card[index]);
         index++;             
    }
    deck[index] = NULL;
    
    shuffle(deck);
    print(deck);
    
    system("PAUSE");
    return 0;
}
