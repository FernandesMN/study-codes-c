#include <stdio.h>
#include <string.h>

int main(){
	char leitor[1000];
	FILE *fp = fopen("Arquivo de Entrada.txt", "r");
	while(fgets(leitor, 1000, fp)!=NULL);
	printf("%s", leitor);
	return 0;
}