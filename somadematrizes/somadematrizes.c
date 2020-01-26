#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5

void carregarA(int matrx[][M], int L, int C){
    int i, j;
    printf("Matriz A\n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            matrx[i][j] = rand()%90;
            printf("%d ", matrx[i][j]);
        }
    }
}
void carregarB(int matrx[][M], int L, int C){
    int i, j;
    printf("\n");
    printf("Matriz B\n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            matrx[i][j] = rand()%100;
            printf("%d ", matrx[i][j]);
        }
    }
}
void somarAeB(int matrx1[][M], int matrx2[][M], int L, int C){
    int i, j, matC[L][C];
    printf("\n");
    printf("Matriz C\n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            matC[i][j] = matrx1[i][j] + matrx2[i][j];
            printf("%d ", matC[i][j]);
        }
    }
}
int main(){
    int matA[N][M], matB[N][M];
    srand(time(NULL));
    carregarA(matA, N, M);
    carregarB(matB, N, M);
    somarAeB(matA, matB, N, M);
    return 0;
}
