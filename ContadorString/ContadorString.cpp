#include <stdio.h>
#define MAX 20

void contador(char pa[]){
	int cont;
	cont = 0;
	while(pa[cont]!='\0'){//vai executar o laco ate cont ser igual a '\0', ou sej fincal
		cont++;//armazena as contagens
	}
	//cont += cont; SE QUISER CONTAR O TERMINADOR NULO
	printf("\nNumero de caracteres: %d", cont);	
}
int main(){
	char palavra[MAX];
	printf("Digite algo: ");
	scanf("%s", palavra);
	contador(palavra);
	return 0;
}
