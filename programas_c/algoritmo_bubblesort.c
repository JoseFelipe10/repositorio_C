#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TM 10 // define o tamanho do array

int bubblesort (int val[],int tamanho){
int i,j,maior;
// Algoritmo bubblesort
for(i=1 ; i< tamanho; i++){       
    for (j=0 ; j< tamanho -1; j++ ){
        if(val[j]>val[j+1]){
            maior = val[j] ;
            val[j] = val[j+1];
            val[j+1] = maior;
            }
        }
    }
}

int main() {
int nums[TM],i;
setlocale(LC_ALL,"portuguese");
printf("---------------------BubbleSort---------------------\n");
for(i=0 ; i<TM ; i++){
    printf("inserir dez números para o algoritmo:");
    scanf("%i",&nums[i]);   }
printf("\nOs números  inseridos são:");
for(i=0 ; i <TM; i++){
    printf(" [%i]",nums[i]); }
printf("\n");
bubblesort (nums,TM); // Chamando a função
printf("\nNúmeros organizados em ordem crescente com o bubblesort:");
for(i = 0 ; i < TM ; i++){
    printf(" [%i] ",nums[i]);
}
return 0;
}



