#include <stdio.h>

void CopiarConteudo(FILE *F1, FILE *F2){
	char leitor[1000];
	while(fgets(leitor, 1000, F1)!=NULL);
	fputs(leitor, F2);
}
int main(){
	FILE *file1;
	FILE *file2;
	file1 = fopen("Entrada.txt", "r");
	file2 = fopen("Arquivo2.txt", "w");
	if((file1 == NULL)||(file2 == NULL)){
		printf("Arquivo Nao encontrado");
		return 0;
	}
	CopiarConteudo(file1, file2);
	fclose(file1);
	fclose(file2);
	return 0;
}