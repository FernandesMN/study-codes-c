#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void carregarVetA(int vetA[], int MAX){//funcao para carregar os vetores A , recebendo ele como parametro
	int i;
	for(i=0;i<MAX;i++)
		vetA[i] = rand()%80;//vetor A recebera um valor entre 0 e 80
}
void carregarVetB(int vetB[], int MAX){//funcao para carregar os vetores B , recebendo ele como parametro
	int i;
	for(i=0;i<MAX;i++)
		vetB[i] = rand()%90;//vetor B recebera um valor entre 0 e 90
}	
void pegarMaior(int vetA[], int vetB[], int vetC[], int MAX){//funcao para pegar o maior valor, recebendo A, B e C como parametros
	int i;
	for(i=0;i<MAX;i++){
		if(vetA[i]>vetB[i])
			vetC[i] = vetA[i];
		else
			vetC[i] = vetB[i];
	}
}
void mostrar(int vetA[], int vetB[], int vetC[], int MAX){// funcao para mostrar o vetor A e B e o C que contem o maior valor de entre A e B
	int i;
	for(i=0;i<MAX;i++){
		printf("%d	", vetA[i]);
		printf("%d	", vetB[i]);
		printf("%d	\n", vetC[i]);
		
	}
}			
int main(){
	int A[N], B[N], C[N];//defindo os vetores
	srand(time(NULL));//funcao para gerar numeros aleatorios
	carregarVetA(A, N);//chamando
	carregarVetB(B, N);//chamando
	pegarMaior(A, B, C, N);//chamando
	mostrar(A, B, C, N);//chamando
	return 0;
}
