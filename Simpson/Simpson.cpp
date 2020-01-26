#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265359
//http://www.cplusplus.com/reference/cmath/asin/
//https://brasilescola.uol.com.br/matematica/ponto-medio-um-segmento-reta.htm

void valorCordenada(float *x){
	int i;
	for(i=0;i<2;i++)
		scanf("%f", &x[i]);
}
int cordenadaNova(float *x, float *y, int I){
	int j, xy;
	j = I; 
	xy = (x[j] - y[j]);
	return xy; 
}
float angulo(float *xy, float *xz){
	int i;
	float prod, prodMod, cosseno, rad, mod1, mod2;
	prod = 0;
	for(i=0;i<2;i++)
		prod = prod + xy[i]*xz[i];
	mod1 = sqrt((pow(xy[0], 2))+(pow(xy[1],2)));
	mod2 = sqrt((pow(xz[0], 2))+(pow(xz[1],2)));
	prodMod = mod1 * mod2;
	cosseno = prod/prodMod;
	rad = acos(cosseno)*(180/PI);
	return rad;
}
float distancia(float *x, float *y){
	int soma;
	float dis;
	soma = pow(y[0]-x[0], 2) + pow(y[1]-x[1], 2);
	dis = sqrt(soma);
	return dis;
}
void Ponto(float *A, float *B, float *C, float ang1, float ang2, float ang3,float *maiorang){
	float x, y, xM, yM;
	if((ang1==60)&&(ang2==60)&&(ang3==60)){
		x = ((float)(A[0]+B[0]+C[0])/3);
		y = ((float)(A[1]+B[1]+C[1])/3);
		printf("Coordenada do ponto: M[%f][%f]", x, y);
	}
	if((ang1==90)||(ang2==90)||(ang2==90)){
		x = ((float)(A[0]+B[0]+C[0])/3);
		y = ((float)(A[1]+B[1]+C[1])/3);
		xM = (x + maiorang[0])/2;
		yM = (y + maiorang[1])/2;
		printf("Coordenada do ponto: M[%f][%f]", xM, yM);
	}
	if((ang1==ang2)&&((ang1||ang2)!=ang3)||(ang1==ang3)&&((ang1||ang3)!=ang2)&&(ang1!=90)&&(ang2!=90)&&(ang3!=90)){
		x = ((float)(A[0]+B[0]+C[0])/3)*(sqrt(3)/2);
		y = ((float)(A[1]+B[1]+C[1])/3)*(1.2);
		xM = (x + maiorang[0])/2;
		yM = (y + maiorang[1])/2;
		printf("Coordenada do ponto: M[%f][%f]", xM, yM);
	}
}
int main(){
	float a[2], b[2], c[2], AB[2], AC[2], BA[2], BC[2], CA[2], CB[2], angMaior[2];
	float angA, angB, angC, dAB, dBC, dCA;
	int i;
	printf("Informe as cordenadas de A: ");
	valorCordenada(a);
	printf("Informe as cordenadas de B: ");
	valorCordenada(b);
	printf("Informe as cordenadas de C: ");
	valorCordenada(c);
	for (i=0;i<2;i++){
		AB[i] = cordenadaNova(a, b, i);
		AC[i] = cordenadaNova(a, c, i);
		BA[i] = cordenadaNova(b, a, i);
		BC[i] = cordenadaNova(b, c, i);
		CA[i] = cordenadaNova(c, a, i);
		CB[i] = cordenadaNova(c, b, i);	
	}
	printf("\n\n");
	angA = angulo(AB, AC);
	printf("Angulo A = %f\n", angA);
	angB = angulo(BA, BC);
	printf("Angulo B = %f\n", angB);
	angC = angulo(CA, CB);
	printf("Angulo C = %f\n", angC);
	if((angA<120) && (angB<120) && (angC<120)){
		printf("\n\n"); 
		dAB = distancia(a, b);
		printf("Distancia AB = %f\n", dAB);
		dBC = distancia(b, c);
		printf("Distancia BC = %f\n", dBC);
		dCA = distancia(c, a);
		printf("Distancia CA = %f\n", dCA);
		if ((angA>=angB)&&angA>=angC)
			for(i=0;i<2;i++)
				angMaior[i] = a[i];
		if ((angB>=angA)&&angB>=angC)
			for(i=0;i<2;i++)
				angMaior[i] = b[i];
		if ((angC>=angB)&&angC>=angA)
			for(i=0;i<2;i++)
				angMaior[i] = c[i];
		Ponto(a, b, c, angA, angB, angC, angMaior);
	}
	else{
		printf("\n\n");
		printf("Um dos angulos excede 120 graus!\n");
	}
	return 0;
}
