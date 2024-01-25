#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main ()  {
int i;
struct cadastro {
      char  nome_aluno[100];
      int   num_aluno;
      float nota[3];         };
struct cadastro aluno ;
printf("inserir nome aluno:");
fgets(aluno.nome_aluno,100,stdin);
printf("\nnúmero do aluno:");
scanf("%d",&aluno.num_aluno);
for (i=0;i<3;i++){
      printf("\nInserir a nota do aluno:");
      scanf("%f",&aluno.nota[i]);  } ;
printf("\nnúmero:%d",aluno.num_aluno);
printf("\nNome:%s",aluno.nome_aluno);
for(i=1;i<4;i++){
    printf("\n%dº nota:%.f",i,aluno.nota[i]);
  };
return 0 ; }