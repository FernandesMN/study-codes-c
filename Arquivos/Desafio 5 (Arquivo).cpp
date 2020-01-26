#include <stdio.h>
#include <string.h>

char reverse(char *s){
	int length = strlen(s);
	int i, j, c;
	for(i=0,j=length-1;i<j;i++,j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return *s;
}
int main(){
	int i = 0;
	char frase[90];
	FILE *arq1;
	FILE *arq2;
	arq1 = fopen("Entrada.txt", "r");
	arq2 = fopen("Saida.txt","w");
	do{
		frase[i] = fgetc(arq1);
		putchar(frase[i]);
		i++;
	}while(frase[i]!=EOF);
	reverse(frase);
	printf("\n\n%s", frase);
	fputs(frase, arq2);
	fclose(arq1);
	fclose(arq2);
	return 0;
}