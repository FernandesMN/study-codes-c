#include <stdio.h>

int main(){
struct horario{ //definindo estrutura
	int horas;
	int minutos;
	int segundos;
	float teste;
	char letra;
};
struct horario agora; //declarando uma estrutura
	agora.horas = 12; //inicializando membros
	agora.minutos = 10;
	agora.segundos = 5;
	agora.teste = 50.25;
	agora.letra = 'A';
printf("Agora, %d:%d:%d\n", agora.horas, agora.minutos, agora.segundos);
printf("Teste, %f\n", agora.teste);
printf("Letra, %c\n", agora.letra);
struct horario depois;//declarando uma estrutura
	depois.horas = agora.horas + 10;//inicializando membros
	depois.minutos = agora.minutos + 10;
	depois.segundos = agora.segundos + 10;
	depois.teste = agora.teste + 25.00;
	depois.letra = 'B';
printf("Depois, %d:%d:%d\n", depois.horas, depois.minutos, depois.segundos);
printf("Teste, %f\n", depois.teste);
printf("Letra, %c\n", depois.letra);
return 0;
}