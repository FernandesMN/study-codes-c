#include <stdio.h>

int main(){
	
	/*-----------------------------------------------------QUESTAO 3
	int a = 0, b, c, n = 5;
	for(b=1;b<=n;b++)
		for(c=b;c<=n;c++,a++);
	printf("a = %d", a); */
	
	/*-----------------------------------------------------QUESTAO 4
	int a = 15, b = 20, c = 20, d = 0;
	while(a<b){
		if(c % a != 0 && c % b != 0){
			c++;
			continue;
		}
		d = d + c;
		if(c %a == 0 && c % b == 0){
			break;
		}
		c++;
	}
	printf("d = %d", d); */
	
	/*----------------------------------------------------QUESTAO 5
	int a = 11;
	while(a>=0){
		a--;
		puts("1");
	}
	a = 11;
	do{
		puts("2");
		a--;
	}while(a>0); */
	
	/*---------------------------------------------------QUESTAO 6
	int *p, i = 7;
	p = &i;
	printf("%d ", *p);
	*p = 8;
	printf("%d", i); */
	
	/*---------------------------------------------------QUESTAO 8
	int A;
	A = func(80);
	printf("A = %d", A);
	
	int func (unsigned int a){
		if(a==0)
			return 0;
		else
			return(a & 1) + func(a >> 1);
	} */
	
	/*---------------------------------------------------QUESTAO 9
	Recursivide para fatorial
	
	int funcA(int n){
		if(!n)
			return 1;
		else
			return n * funcA(n-1);
	} */
	
	/*--------------------------------------------------QUESTAO 10
	int i = 0;
	float vn[5] = {7.5, 9.0, 8.5, 9.5, 10.0};
	do{
		printf("%f\n", vn[i++]);
	}while(i<5); */
	return 0;
}
