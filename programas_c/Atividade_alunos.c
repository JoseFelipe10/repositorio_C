#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float funcao_media (float *av1,float *av2,float *av3,float *av4){
    float media = (*av1 + *av2 + *av3 + *av4)/4;
    return media;
}
float funcao_aprovado(float media){
    if(media >= 6.0){
       return printf("APROVADO COM MEDIA[%.2f]",media);
       }
    else
        return printf("REPROVADO COM MEDIA[%.2f]",media);

}

int main () {
int jose=11,diego=22,i,j,aluno;
float media_jose,media_jose2,media_diego,media_diego2;
int menu;
char disciplina[11] = "NULL";
char materia1[10] = "portugues";
char materia2[9] = "historia";
float notas1[4][4];
float *av1j = &notas1[0][0];
float *av2j = &notas1[0][1];
float *av3j = &notas1[0][2];
float *av4j = &notas1[0][3];
//-------------------
float *av1jj= &notas1[1][0];
float *av2jj= &notas1[1][1];
float *av3jj = &notas1[1][2];
float *av4jj = &notas1[1][3];
//------------------
float *av1d = &notas1[2][0];
float *av2d = &notas1[2][1];
float *av3d = &notas1[2][2];
float *av4d = &notas1[2][3];
//------------------
float *av1dd = &notas1[3][0];
float *av2dd = &notas1[3][1];
float *av3dd = &notas1[3][2];
float *av4dd = &notas1[3][3];
// atribuindo valores padrão as notas
for (i=0;i<4;i++){
    for (j=0;j<4;j++){
       notas1[i][j]=0;
       }
}
while (menu!= 4)
{   printf("\n [1] Inserir notas");
    printf("\n [2] Consultar alunos");
    printf("\n [3] Notas, media e aprovacao");
    printf("\n [4] Para sair\n");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        printf("\n\n************************************************************************\n\n");
        printf("Disciplinas:[portugues][historia]\n");
        printf("\nQual aluno ira inserir as notas(insira o codigo):");
        printf("\n[0]voltar\n");
        scanf("%d",&aluno);
        if(aluno == 0)
            break;
        else if (aluno == jose){
            printf("\nQual materia ? (sem acentos e minusculo)(Aluno Jose):");
            scanf("%s",disciplina);
            if(strcmp(disciplina,materia1) ==0){
                    printf("\nInserir as 4 notas para (Portugues)");
                    printf("\n Av1:");
                    scanf("%f",av1j);
                    printf("\n Av2:");
                    scanf("%f",av2j);
                    printf("\n Av3:");
                    scanf("%f",av3j);
                    printf("\n Av4:");
                    scanf("%f",av4j);
                    break; }
            else if(strcmp(disciplina,materia2) ==0) {
                    printf("\nInserir as 4 notas para (Historia)");
                    printf("\n Av1:");
                    scanf("%f",av1jj);
                    printf("\n Av2:");
                    scanf("%f",av2jj);
                    printf("\n Av3:");
                    scanf("%f",av3jj);
                    printf("\n Av4:");
                    scanf("%f",av4jj);
                    break;     }
            else
                printf("\nDisciplina invalida");
        break;    }
        else if (aluno == diego){
 printf("\nQual materia ? (sem acentos e minusculo)(Aluno Diego):");
            scanf("%s",disciplina);
            if(strcmp(disciplina,materia1) ==0){
                    printf("\nInserir as 4 notas para (Portugues)");
                    printf("\n Av1:");
                    scanf("%f",av1d);
                    printf("\n Av2:");
                    scanf("%f",av2d);
                    printf("\n Av3:");
                    scanf("%f",av3d);
                    printf("\n Av4:");
                    scanf("%f",av4d);
                    break; }
            else if(strcmp(disciplina,materia2) ==0) {
                    printf("\nInserir as 4 notas para (Historia)");
                    printf("\n Av1:");
                    scanf("%f",av1dd);
                    printf("\n Av2:");
                    scanf("%f",av2dd);
                    printf("\n Av3:");
                    scanf("%f",av3dd);
                    printf("\n Av4:");
                    scanf("%f",av4dd);
                    break;    }
            else
                printf("\nDisciplina invalida");
        break;    }
    case 2:
        printf("\nALUNOS:");
        printf("\n[CODIGO:%d] | Nome: Diego Cristiano Ronaldo | idade: 12/10/2008",diego);
        printf("\n*************************************************************************");
        printf("\n[CODIGO:%d] | Nome: Jose Curry da Costa    | idade: 01/01/2010\n\n",jose);
        break;
    case 3:
        printf("\nInserir o codigo do aluno:");
        scanf("%d",&aluno);
        if(aluno == 11){
            printf("\nNome: Jose Curry da costa");
            printf("\nDisciplina [Portugues]\n");
            printf("AV1:[%.2f]\nAv2:[%.2f]\nAv3:[%.2f]\nAv4:[%.2f]\n",notas1[0][0],notas1[0][1],notas1[0][2],notas1[0][3]);
            media_jose  = funcao_media(av1j,av2j,av3j,av4j);
            funcao_aprovado(media_jose);
            printf("\n***************************************************************************\n");
            printf("\nDisciplina [Historia]\n");
            printf("AV1:[%.2f]\nAv2:[%.2f]\nAv3:[%.2f]\nAv4:[%.2f]\n",notas1[1][0],notas1[1][1],notas1[1][2],notas1[1][3]);
            media_jose2  = funcao_media(av1jj,av2jj,av3jj,av4jj);
            funcao_aprovado(media_jose2);
            break;
        }
        else if(aluno == 22){
            printf("\n Nome: Diego Cristiano Ronaldo");
            printf("\nDisciplina [Portugues]\n");
            printf("AV1:[%.2f]\nAv2:[%.2f]\nAv3:[%.2f]\nAv4:[%.2f]\n",notas1[2][0],notas1[2][1],notas1[2][2],notas1[2][3]);
            media_diego = funcao_media(av1d,av2d,av3d,av4d);
            funcao_aprovado(media_diego);
            printf("\n****************************************************************************");
            printf("\nDisciplina [Historia]\n");
            printf("AV1:[%.2f]\nAv2:[%.2f]\nAv3:[%.2f]\nAv4:[%.2f]\n",notas1[3][0],notas1[3][1],notas1[3][2],notas1[3][3]);
            media_diego2 = funcao_media(av1dd,av2dd,av3dd,av4dd);
            funcao_aprovado(media_diego2);
            break;
        }
        else {
            printf("\nCODIGO INVALIDO\n"); break; }
        }
}

return 0; }
