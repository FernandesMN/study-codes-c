#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int matricula;
	int faltas;
	float nota1;
	float nota2;
}TAluno;

TAluno lerDados(TAluno D[], int c){
	printf("Matricula: ");
	scanf("%d", &D[c].matricula);
	printf("Faltas: ");
	scanf("%d", &D[c].faltas);
	printf("Primeira Nota: ");
	scanf("%f", &D[c].nota1);
	printf("Segunda Nota: ");
	scanf("%f", &D[c].nota2);
	return D[c];
}
void mostrar(TAluno D[], int N){
	int i;
	for(i=0;i<N;i++){
		printf("Matricula: %d: ", D[i].matricula);
		printf("[NOTA 1: %.2f] ", D[i].nota1);
		printf("[NOTA 2: %.2f] ", D[i].nota2);
		printf("[FALTAS: %d] ", D[i].faltas);
		printf("\n\n");	
	}
}
void relatorio(TAluno D[], int N){
	int i;
	printf("APROVADOS: \n");
	for(i=0;i<N;i++){
		if(((D[i].nota1+D[i].nota2)>=14)&&(D[i].faltas<=7))
			printf("(%d) ", D[i].matricula);	
	}
	printf("\n");
	printf("REPROVADOS: \n");
	for(i=0;i<N;i++){
		if(((D[i].nota1+D[i].nota2)<8)||(D[i].faltas>7))
			printf("(%d) ", D[i].matricula);	
	}
	printf("\n");
	printf("EXAME FINAL: \n");
	for(i=0;i<N;i++){
		if(((D[i].nota1+D[i].nota2)<14)&&((D[i].nota1+D[i].nota2)>8))
			if(D[i].faltas<=7)
			printf("(%d) ", D[i].matricula);	
	}
}
int main(){
	int i, n;
	printf("Quantidade de alunos: ");
	scanf("%d", &n);
	TAluno vDados[n];
	for(i=0;i<n;i++){
		vDados[i] = lerDados(vDados, i);
		system("cls");
	}
	printf("DADOS E RELATORIO\n");
	printf("============================================================\n");
	mostrar(vDados, n);
	relatorio(vDados, n);
	return 0;
}