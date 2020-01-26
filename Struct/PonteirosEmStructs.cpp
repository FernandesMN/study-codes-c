#include <stdio.h>

int main(){
	struct horario{//declarando estrutura
		int *pHora;
		int *pMin;
		int *pSegun;		
	};
	struct horario hoje;//definindo um estrutura do tipo horario
	
	//definindo e inicializando algumas variaveis
	int hora = 12;
	int min = 10;
	int segun = 45;
	
	//entregando o endereço das variaveis para os ponteiros da struct horario
	hoje.pHora = &hora;
	hoje.pMin = &min;
	hoje.pSegun = &segun;
	
	//acessando os valores que os ponteiros apontam
	printf("Hora: %d\n", *hoje.pHora);
	printf("Minuto: %d\n", *hoje.pMin);
	printf("Segundo: %d\n", *hoje.pSegun);
	*hoje.pSegun = 1000;
	printf("Novo segundo: %d\n", *hoje.pSegun);
	return 0;
}
