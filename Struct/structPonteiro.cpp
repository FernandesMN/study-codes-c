#include <stdio.h>

int main(){
	struct horario{//declarando estrutura
		int horas;
		int min;
		int segun;
	};
	struct horario agora, *depois;
	depois = &agora;
	
	/*(*depois).horas = 10;  (Outra forma de usar os ponteiros direcionados a estruturas)
	(*depois).min = 42;
	(*depois).segun = 26; */
	
	//Forma mais comumente ultilizada
	depois->horas = 10;
	depois->min = 42;
	depois->segun = 26;
	
	int somatorio = 100;
	struct horario antes;
	
	//Operacoes matematicas com estruturas e ponteiros
	
	antes.horas = somatorio + depois->segun; 
	antes.min = agora.horas + depois->min;
	antes.segun = depois->segun + depois->min;
	
	printf("%d:%d:%d", antes.horas, antes.min, antes.segun);
	return 0;	
}
