#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

void pegarmatricula(int mat[], int N){
    int i;
    printf("MATRICULAS\n");
    for(i=0;i<N;i++){
        scanf("%d", &mat[i]);
    }
}
void pegarnotas(int not[], int N){
    int i;
    printf("\n");
    printf("NOTAS\n");
    for(i=0;i<N;i++){
        not[i] = rand()%10;
        printf("%d ", not[i]);
    }
}
void relacao(int not[], int mat[], int N){
    int i;
    printf("\n");
    for(i=0;i<N;i++){
        printf("Aluno %d, nota: %d\n", mat[i], not[i]);
    }
}
int main(){
    int nota[MAX], matricula[MAX];
    srand(time(NULL));
    pegarmatricula(matricula, MAX);
    pegarnotas(nota, MAX);
    relacao(nota, matricula, MAX);
    return 0;
}
