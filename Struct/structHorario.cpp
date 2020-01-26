#include <stdio.h>
#include <stdlib.h>
#define MAX 2//definindo constante

struct horario{ //estrutura global
	int hora;
	int min;
	int segun;
};
void receber(struct horario x[]){//funcao para atribuir valores ao vetor estrutura
	int i;
	for(i=1;i<=MAX;i++){
		printf("Digite o %do horario(hh:mm:ss): ", i);
		scanf("%d:%d:%d", &x[i].hora, &x[i].min, &x[i].segun);
		system("cls");	
	}
}
void mostrar(struct horario x[]){//funcao para mostrar os valores do vetor estrutura
	int i;
	system("cls");
	for(i=1;i<=MAX;i++){
		printf("%do horario\n", i);
		printf("%d:%d:%d\n", x[i].hora, x[i].min, x[i].segun);	
	}
}
int main(){
	struct horario list[MAX];//definindo vetor estrutura
	receber(list);//chamando
	mostrar(list);//chamando
	return 0;
}
