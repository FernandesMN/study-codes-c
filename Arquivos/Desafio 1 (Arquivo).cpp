#include <stdio.h>

int main(){
	char ch, cont;
	FILE *fp = fopen("entrada.txt", "r");
	if(!fp){
		printf("Arquivo nao encontrado!");
		return 0;
	}
	cont = 0;
	do{
		ch = fgetc(fp);
		if(ch=='\n')
			cont++;
	}while(ch!=EOF);
	printf("Total de linhas do arquivo: %d", cont+1);
	return 0;
}