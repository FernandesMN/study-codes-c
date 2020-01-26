#include <stdio.h>
#define TM1 4
#define TM2 9
#define TNV 13

void concatenar(char pa1[], char pa2[], char novpa[]){
	int i, j;
	for(i=0;i<TM1;i++)//laco de 0 a 3 para colocar 'pao' e ' ' em novpa
		novpa[i] = pa1[i];
	for(j=0;j<TM2;j++)//laco de 0 a 9 para colocar 'mortadela' em novpa, completando 13 indices
		novpa[TM1+j] = pa2[j];//O truque eh colocar tamanho1 + incremento no vetor que vai receber
}
int main(){
	int i;
	char palavra1[TM1];
	char palavra2[TM2];
	char novpalavra[TNV];
	printf("String 1\n[Tamanho maximo: %d]: ", TM1);
	gets(palavra1);
	printf("String 2\n[Tamanho maximo: %d]: ", TM2);
	gets(palavra2);
	concatenar(palavra1, palavra2, novpalavra);
	printf("%s", novpalavra);
	return 0;
}
