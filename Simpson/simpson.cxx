#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1415926535897932384626433832795
//http://www.cplusplus.com/reference/cmath/asin/
//https://brasilescola.uol.com.br/matematica/ponto-medio-um-segmento-reta.htm

void valorCordenada(double *x){
	int i;
	for(i=0;i<2;i++)
		scanf("%lf", &x[i]);
}
int cordenadaNova(double *x, double *y, int I){
	int j, xy;
	j = I; 
	xy = (x[j] - y[j]);
	return xy; 
}
double angulo(double *xy, double *xz){
	int i;
	double prod, prodMod, cosseno, rad, mod1, mod2;
	prod = 0.0;
	for(i=0;i<2;i++)
		prod = prod + xy[i]*xz[i];
	mod1 = sqrt((pow(xy[0], 2))+(pow(xy[1],2)));
	mod2 = sqrt((pow(xz[0], 2))+(pow(xz[1],2)));
	prodMod = mod1 * mod2;
	cosseno = prod/prodMod;
	rad = acos(cosseno)*(180/PI);
	return rad;
}
double distancia(double *x, double *y){
	int soma;
	double dis;
	soma = pow(y[0]-x[0], 2) + pow(y[1]-x[1], 2);
	dis = sqrt(soma);
	return dis;
}
void equilatero(double x, double y, double *a, double *b, double *c){
		x = ((double)(a[0]+b[0]+c[0])/3);
		y = ((double)(a[1]+b[1]+c[1])/3);
		printf("EQUILATERO: Coordenada do ponto: M[%lf][%lf]", x, y);
}
void retangulo(double *m_ang, double x1, double y1, double x2, double y2,double *a, double *b, double *c){
		x1 = ((double)(a[0]+b[0]+c[0])/3);
		y1 = ((double)(a[1]+b[1]+c[1])/3);
		x2 = (x1 + m_ang[0])/2;
		y2 = (y1 + m_ang[1])/2;
		printf("RETANGULO: Coordenada do ponto: M[%lf][%lf]", x2, y2);
}
void isoceles(double *m_ang, double x1, double y1, double x2, double y2,double *a, double *b, double *c){
		x1 = ((double)(a[0]+b[0]+c[0])/3)*(sqrt(3)/2);
		y1 = ((double)(a[1]+b[1]+c[1])/3)*(1.2);
		x2 = (x1 + m_ang[0])/2;
		y2 = (y1 + m_ang[1])/2;
		printf("ISOCELES: Coordenada do ponto: M[%lf][%lf]", x2, y2);
}
void Ponto(double *A, double *B, double *C, double ang1, double ang2, double ang3,double *maiorang){
	double x, y, xM, yM;
	if((ang1==60)&&(ang2==60)&&(ang3==60))
		equilatero(x, y, A, B, C);
	if((ang1==90)||(ang2==90)||(ang2==90))
		retangulo(maiorang, x, y, xM, yM, A, B, C);
	if(((ang1==ang2)&&(ang1!=ang3))||((ang1==ang3)&&(ang1!=ang2)))
		if((ang1<90)&&(ang2<90)&&(ang3<90))
			isoceles(maiorang, x, y, xM, yM, A, B, C);
}
int main(){
	double a[2], b[2], c[2], AB[2], AC[2], BA[2], BC[2], CA[2], CB[2], angMaior[2];
	double angA, angB, angC, dAB, dBC, dCA;
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
	printf("Angulo A = %lf\n", angA);
	angB = angulo(BA, BC);
	printf("Angulo B = %lf\n", angB);
	angC = angulo(CA, CB);
	printf("Angulo C = %lf\n", angC);
	if((angA<120) && (angB<120) && (angC<120)){
		printf("\n\n"); 
		dAB = distancia(a, b);
		printf("Distancia AB = %lf\n", dAB);
		dBC = distancia(b, c);
		printf("Distancia BC = %lf\n", dBC);
		dCA = distancia(c, a);
		printf("Distancia CA = %lf\n", dCA);
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
