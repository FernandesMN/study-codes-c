#include <stdio.h>
#include <stdlib.h>
#define N 5

void inverter(int vet[]){//funcao que troca pares de mebros do vetor, pelo metodo de variavel auxiliar
	int a, i, j;
	for(i=0;i<(N/2);i++){
        j = N - i - 1;
        a = vet[i];
        vet[i] = vet[j];
        vet[j] = a;
    }
}
int main (){
    int vet[N], i;
    printf("Informe os valores do vetor:\n");
    for(i=0;i<N;i++)// loop para carregar o vetor
        scanf("%d", &vet[i]);
    system("cls");//comando para limpar a tela
    printf("Vetor:\n");
    for(i=0;i<N;i++)//loop para mostrar o vetor antes da troca
        printf("[%d] ", vet[i]);
    printf("\nVetor invertido:\n");
    inverter(vet);//chmando
    for(i=0;i<N;i++)//loop para mostrar o vetor depois da troca
        printf("[%d] ", vet[i]);
    return(0);
}
