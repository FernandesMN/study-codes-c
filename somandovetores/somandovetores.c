#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void carregarA(int vetor[], int N){
    int i;
    printf("Vetor A\n");
    for(i=0;i<N;i++){
        vetor[i] = rand()%90;
        printf("%d ", vetor[i]);
    }
}
void carregarB(int vetor[], int N){
    int i;
    printf("\n");
    printf("Vetor B\n");
    for(i=0;i<N;i++){
        vetor[i] = rand()%100;
        printf("%d ", vetor[i]);
    }
}
void somarAeB(int vetor1[], int vetor2[], int N){
    int i, vetC[N];
    printf("\n");
    printf("Vetor C\n");
    for(i=0;i<N;i++){
        vetC[i] = vetor1[i] + vetor2[i];
        printf("%d ", vetC[i]);
    }
}
int main(){
    int vetA[MAX], vetB[MAX];
    srand(time(NULL));
    carregarA(vetA, MAX);
    carregarB(vetB, MAX);
    somarAeB(vetA, vetB, MAX);
    return 0;
}
