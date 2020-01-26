#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

//estrutura do no
struct NO{
	int info;
	struct NO *esq;
	struct NO *dir;
};

//cria no raiz
ArvBin *cria_ArvBin(){
	ArvBin *raiz = (ArvBin*) malloc(sizeof(ArvBin));
	if(raiz!=NULL)
		*raiz = NULL;
	return raiz;
}

//libera no por no, recursivamente
void libera_NO(struct NO *no){
	if(no==NULL)
		return;
	libera_NO(no->esq);
	libera_NO(no->dir);
	free(no);
	no = NULL;
}

//libera a arvore
void libera_ArvBin(ArvBin *raiz){
	if(raiz==NULL)
		return;
	libera_NO(*raiz); // chama a funcao enviando a raiz
	free(raiz); // libera raiz
}

//verificar se a arvore esta vazia
int estaVazia_ArvBin(ArvBin *raiz){
	if(raiz==NULL)
		return 1;
	if(*raiz==NULL)
		return 1;
	return 0;
}

//verificando a altura da arvore
int altura_ArvBin(ArvBin *raiz){
	if(raiz==NULL)
		return 0;
	if(*raiz==NULL)
		return 0;
	int alt_esq, alt_dir;
	alt_esq = altura_ArvBin(&((*raiz)->esq));
	alt_dir = altura_ArvBin(&(*raiz)->dir);
	if(alt_esq > alt_dir)
		return(alt_esq + 1);
	else
		return (alt_dir + 1);
}

int totalNO_ArvBin(ArvBin *raiz){
	if(raiz==NULL)
		return 0;
	if(*raiz==NULL)
		return 0;
	int alt_esq, alt_dir;
	alt_esq = altura_ArvBin(&((*raiz)->esq));
	alt_dir = altura_ArvBin(&(*raiz)->dir);
	return (alt_esq + alt_dir + 1);
}
int main(){
	int altura, total;
	//criando ponteiro de ponteiro, raiz do tipo ArvBin do tipo NO
	ArvBin *raiz = cria_ArvBin();
	//chamando para liberar
	libera_ArvBin(raiz);
	//testando para saber se esta vazia
	//int x = estaVazia_ArvBin(raiz);
	if(estaVazia_ArvBin(raiz))
	//recebendo a altura da arvore
	altura = altura_ArvBin(raiz);
	//recebendo total de nos
	total = totalNO_ArvBin(raiz);
	return 0;
}