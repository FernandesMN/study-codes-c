#include <stdio.h>

struct horario{//definindo estrutura global do tipo horario
	int horas;
	int min;
	int segun;
};
struct horario teste(struct horario x){//recebe os parametros e executa normalmente
	printf("Agora, %d:%d:%d\n", x.horas, x.min, x.segun);
	return x;
}
int main(){
	struct horario teste(struct horario x);//declara uma funcao struct do tipo horario com nome teste
	//que retorne uma struct do tipo horario com nome qualquer
	struct horario agora;;//declara uma struct do tipo horario chamada agora
		agora.horas = 10; //atribui valores
		agora.min = 42;
		agora.segun = 58;
	struct horario proxima;//declara uma struct do tipo horario chamada proxima
	proxima = teste(agora);//chama funcao envianfo struct agora como parametro
	return 0;
}