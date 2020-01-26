#include <stdio.h>

int main(){
	struct horario{//definindo estrutura
		int horas;
		int min;
		int segun;
	}agora; //outra forma de declarar e inicializar membros(pode colocar mais de um)
	//agora = {10,20,30};(outra forma)
	agora.horas = 10;//outra forma
	agora.min = 20;
	agora.segun = 30;
	struct horario agora = {.segun = 20, .min = 10};//inicializando fora de ordem
	printf("%d:%d:%d", agora.horas, agora.min, agora.segun); 
	return 0;
}