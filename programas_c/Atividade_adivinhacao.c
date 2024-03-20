#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Função para dizer se o palpite está muito alto ou muito baixo.
int funcao_ajuda (int palpite,int numero) {
if (numero - palpite <= -20)  {
    return printf("\nPalpite alto demais.\n"); }
else if ( numero - palpite >= 20) {
    return printf("\nPalpite baixo demais\n");}
else if (numero - palpite <= -10)  {
    return printf("\nPalpite um pouco alto demais.\n"); }
else if ( numero - palpite >= 10) {
    return printf("\nPalpite um pouco baixo demais\n");}
else if (numero - palpite <= -1)  {
    return printf("\nQuase la um pouquinho alto.\n"); }
else if ( numero - palpite >= 1) {
    return printf("\nQuase la um pouquinho baixo\n");}
else
    return printf("   "); }

int main () {
int jogo,palpite,contador=0;
// menu do jogo (só com uma opção mesmo)
printf("********************Jogo da Adivinhacao********************\n");
printf("Autor:Jose Felipe\n");
printf("[1] Para jogar\n");
scanf("%d",&jogo);
switch (jogo) {
    case 1:
        srand(time(NULL));              // gerando e atribuindo o número "aleatório" a variável 'numero_aleatorio'.
        int numero_aleatorio = (rand() % 100)+1;
        printf("....hum ..ok pensei em um numero entre 1 e 100, tente adivinhar!\n");
        printf("Seu palpite:");
        scanf("%d",&palpite);
        contador = contador + 1;
        while(palpite != numero_aleatorio ) {
             printf("hummm nao e esse o numero que estou pensando.");
             funcao_ajuda(palpite,numero_aleatorio);  // chamando a função ajuda.
             printf("\n[0] Sair do jogo.");
             printf("\nContinue tentando:");
             scanf("%d",&palpite);
            
             if(palpite == 0)  // opção sair 
                break;
             contador = contador + 1;  }
        if (palpite == numero_aleatorio)     
            printf("\n********** Parabens voce acertou!!! o numero que eu estava pensando era:%d **********\n",numero_aleatorio); 
            printf("[%d tentativas]\n",contador) ; break;
    default:
        printf("Opcao invalida");  };
 return 0;    }
