#include <stdio.h>

int main(){
	int i;
	const int N = 2;
	struct horario{
		int horas;
		int min;
		int segun;
	};
	struct horario teste[N];//vetores em struct
	for(i=0;i<N;i++){
		scanf("%d", &teste[i].horas);
		scanf("%d", &teste[i].min);
		scanf("%d", &teste[i].segun);
	}
	for(i=0;i<N;i++)
		printf("%d%:%d:%d\n", teste[i].horas, teste[i].min, teste[i].segun);
	return 0;
}