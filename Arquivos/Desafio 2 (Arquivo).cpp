#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void CopiarConteudo(FILE *F1, FILE *F2){
	char ch;                 //funcao para copiar conteudo caracter por caracter
	do{
		ch = fgetc(F1);   //ch recebe o caracter de F1  
		fputc(ch, F2);    //ch eh copiado para F2
	}while(ch!=EOF);      //condicao de para por fim de conteudo
}
int main(){
	char nome[20];
	FILE *fp1;
	FILE *fp2;
	fp1 = fopen("Desafio II.txt", "r");
	fprintf(fp1, "Funiona logo porra, cara chato!\n e pega essa segunda linha tbm carai");
	printf("Nome do arquivo de destino: ");
	gets(nome);
	strcat(nome, ".txt"); //concatenando o tipo de arquivo ao nome dado
	fp2 = fopen(nome, "a+");
	if((fp1==NULL)||(fp2==NULL)){
		printf("Erro!");
		return 0;
	}
	CopiarConteudo(fp1, fp2);
	printf("Operacao realizada com sucesso!\n");
	fclose(fp1);
	fclose(fp2);
	return 0;
}