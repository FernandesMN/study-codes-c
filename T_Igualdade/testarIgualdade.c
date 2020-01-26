#include <stdio.h>
#define MAX 6

void carregar(int vetor[],int N){//funcao para carregar o vetor
	int i;
	for(i=0;i<N;i++)
		scanf("%d", &vetor[i]);
}
void mostrarVet(int vetor[], int N){//funcao para mostrar o vetor
	int i;
	for(i=0;i<N;i++)
		printf("%d ", vetor[i]);
}
int testarIgual(int vetor[], int N){//funcao para testar se a metade do vetor eh igual ao inverso da sua outra metade
	int i, j;
	i = 0;
	j = N-1;
	while(i<j){
		if(vetor[i]!=vetor[j])//se tiver um diferente ele ja retorna 0(FALSE) pro if e mostra que eh diferente no else
			return 0;
		i++;
		j--;
	}
	return 1;// se tudo ocorrer bem ele retorna 1 pro if(TRUE) e mostra que e igual
}
int main(){
	int vet[MAX];
	carregar(vet, MAX);//chamando
	mostrarVet(vet, MAX);//chamando
	printf("\n\n");
	if(testarIgual(vet, MAX))//coloca a funcao como teste dentro do if
		printf("Eh igual!");
	else
		printf("Eh diferente!");
	return 0;
}

