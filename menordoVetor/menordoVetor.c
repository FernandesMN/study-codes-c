#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void gerarvalores(int vetor[], int MAX){
    int i;
    i = 0;
    while(i<MAX){
        vetor[i] = rand()%100;
        i++;
    }
}
void mostrarvalores(int vetor[], int MAX){
    int i;
    i = 0;
    printf("VETOR\n");
    while(i<MAX){
        printf("%d ", vetor[i]);
        i++;
    }
}
int menorvalor(int vetor[], int MAX){
    int i, menor;
    i = 0;
    menor = vetor[0];
    while(i<MAX){
        if(vetor[i]<menor)
            menor = vetor[i];
        i++;
    }
    return menor;
}
int main (){
    int vet[N];
    srand(time(NULL));
    gerarvalores(vet, N);
    mostrarvalores(vet, N);
    printf("\n");
    printf("Menor valor do vetor: %d\n", menorvalor(vet, N));
    return(0);
}
