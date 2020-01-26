#include <stdio.h>

void soma(int v1, int v2){
	int som;
	som=v1+v2;
	printf("Soma = %d", som);
}
void diferenca(int v1, int v2){
	int menos;
	menos = v1-v2;
	printf("Diferenca = %d", menos);
}
void produto(int v1, int v2){
	int p;
	p = v1*v2;
	printf("Produto = %d", p);
}
void razao(int v1, int v2){
	float ra;
	ra = (float)v1/v2;
	printf("Razao = %.2f", ra);
}
int main(){
	int val1, val2, res, i;
	char op;
	i=0;
	do{
		printf("Informe o primeiro valor: ");
		scanf("%d", &val1);
		printf("Operador: ");
		scanf("%s", &op);
		printf("Informe o segundo valor: ");
		scanf("%d", &val2);
		switch(op){
			case '+':
				soma(val1, val2);
				break;
			case '-':
				diferenca(val1, val2);
				break;
			case '*':
				produto(val1, val2);
				break;
			case '/':
				razao(val1, val2);
				break;
			default:
				printf("Operacao invalida!");
				break;		
		}
		printf("\nDeseja continuar?[1/0]: ");
		scanf("%d", &res);
		i++;
	}while(res==1);
	return 0;
}
