#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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

int main () { 
int vet[10],i;
// preenchendo o vetor vet[10].
srand(time(NULL));
for (i=0; i< 10;i++){
    vet[i] = (rand() % 20)+1;
    printf("[%d] ",vet[i]);
}
bubblesort(vet,10);

printf("\nvetor organizado em ordem crescente com o bubblesort:");
for(i = 0 ; i < 10 ; i++){
    printf(" [%i] ",vet[i]);
}
// Pesquisa binária
int inicial=0; // armazena inicialmente o começo do vetor , após e primeira comparação irá armazena o "meio" do vetor.
int final=9; // lógica similar a variável inicial
int meio;
int encontrado = 0; // vai ser a variável lógica que vai indicar se o valor de 'busca' foi encontrado.
int busca;
int contador=0; 
printf("\nDigitar o valor para pesquisa (entre 1 e 20):");
scanf("%d",&busca);
/*Busca binária: enquanto incicial  for menor ou igual a final e encontrado igual a '0' (falso)*/
while ((inicial <= final) && (encontrado == 0)) {
    meio = (inicial+final)/2; // que no caso de primeira seria inicial = 0 e final = 9 ou seja meio = 4 (em C int/int dá int).
    if (vet[meio]== busca) {
        encontrado = 1;
        contador =contador+1 ; }
    else if (vet[meio] > busca) {      // se por exemplo 'busca' = 2, então 'final' recebe 3 (meio-> 4-1). 
        final = meio -1;
        contador=contador+1; }
    else {
        inicial = meio +1; 
        contador=contador+1;}
}
if (encontrado == 1){
    printf("\nvalor %d encontrado no vetor.",busca);
    printf("\n[CONTADOR:%d]",contador);
}
else {
    printf("valor inexistente");
    printf("\n[CONTADOR:%d]",contador);}

return 0;
}