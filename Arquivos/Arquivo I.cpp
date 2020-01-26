#include <stdio.h>

//fprintf(ponteiro_file, "texto") Escreve no arquivo
//fputs(ponteiro_char, ponteiro_file)
//fputc(caractere, ponteiro_file)
//fscanf(ponteiro_file, "parametros", variaveis) Le dados do arquivo
//fgets(ponteiro_char, tamanho, ponteiro_file) le o arquivo como texto
//fopen("diretorio ou nome do arquivo", "comando w, r ou a") manipular arquivo

int main(){
	char caractere = '3';
	char frase[15] = "Segunda Linha";
	FILE *arquivo;
	arquivo = fopen("String.txt", "a");
	if(arquivo == NULL){
		printf("Arquivo nao encontrado");
		return 0;	
	}
	while(fgets(frase, 100, arquivo)!=NULL){
		printf("%s", frase);
	}
	fputs(frase, arquivo);
	fputc(caractere, arquivo);	
	return 0;
}