#include <stdio.h>

void testeVariavel(int x){//aqui se recebe uma copia da variavel(valor)
	++x;//incrementa 1 a variavel
	printf("x (Com pre-incremento) = %d\n", x);
}
void testePonteiro(int *pX){//ponteiros sempre enviados por padrao o endereço assim como vetores
	++*pX;//adiciona-se 1 ao valor que o ponteiro esta apontando
	printf("pX (Com pre-incremento) = %d\n", *pX);
}
int main(){
	int teste = 1, *pTeste = &teste;
	printf("teste = %d -> ", teste);
	testeVariavel(teste);
	printf("pX = %d -> ", *pTeste);
	testePonteiro(pTeste);//se colocasse o '*' enviaria somente o valor do ponteiro*/
	return 0;
}
