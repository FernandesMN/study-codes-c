#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//char ch;
	char str[100];
	FILE *fp = fopen("teste.txt", "a+");
	if(!fp){
		printf("Falha ao encontrar o arquivo!");
		exit(1);
	}
	printf("\nArquivo criado com sucesso!\n\n");
	
	/*do{
		ch = fgetc(fp);             laco para ler uma string em um arquivo txt
		putchar(ch);                caractere por caractere
	}while(ch!=EOF);*/
		
		
		
	/*do{
		ch = getchar();            laco para escrever uma string no arquivo txt
		if(ch!='$')                caractere por caractere
			fputc(ch, fp);
	}while(ch!='$');*/
	
	/*do{
		printf("(Para sair ENTER) Informe seu nome: ");
		gets(str);
		strcat(str, "\n");         laco para escrever umam string em um arquivo
		fputs(str, fp);            txt com a funcao fputs
	}while(*str!='\n');*/
		
			
	fclose(fp);
	return 0;
}