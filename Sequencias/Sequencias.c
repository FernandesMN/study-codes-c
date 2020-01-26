#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n){
    if (n==1 || n==2)
        return 1;
    else
        return fibo(n-1)+ fibo(n-2);
}
int PA(int r,int *v,int n){
    int an;
    an=v[0]+(n-1)*r;
    return an;
}
int PG(int q,int *v,int n){
    int an;
    an=v[0]*pow(q,n-1);
    return an;
}
int oscilante(int *v, int n){
    int i, c = 0,d;
    for(i=0;i<5;i++){
       if(v[0]!=v[i+1]){
            c++;
       }
    }
    d = n % c;
    return v[d-1];
}
int main(){
	int i;
    int v[5], n, d, an, s, a1, a2, a3, a4, k;
    printf("-=-=-=Informe a sequencia=-=-=-\n");
    for(i=0;i<5;i++){
		printf("%do termo: ",i+1);
        scanf("%d",&v[i]);
    }
    a1=v[1]-v[0];
    a2=v[2]-v[1];
    a3=v[3]-v[2];
    a4=v[4]-v[3];
    printf("Qual termo deseja encontrar: ");
    scanf("%d",&n);
    puts("");
    d = n % 2;
    k = oscilante(v,n);
    if(v[0]==v[1] && v[0]==v[2] && v[0]==v[3] && v[0]== v[4]){
        printf("Sequencia Limitada!!!\n");
        printf("o %d termo e: %d",n,v[0]);
        return 0;
    }
    if(v[0]==v[1] || v[0]==v[2] || v[0]==v[3] || v[0]== v[4] ){
        printf("Sequencia: Oscilante!!!!\n");
        printf("O %do termo e: %d",n,k);
        return 0;
    }
    if((v[1]-v[0])==(v[2]-v[1]) && (v[0]!=v[1])){
        printf("Sequencia: Progressao Aritmetica!!!!\n");
        printf("O %do termo e: %d",n,PA(v[1]-v[0],v,n));
		return 0;
    }
    if (a2-a1==a3-a2){
		an=a1+(n-2)*(a2-a1);
		s = ((a1+an)*(n-1))/2;
		printf("Sequencia: Progressao Aritmetica de 2 ordem!!!!\n");
        printf("O %do termo e: %d",n,s+v[0]);
        return 0;
    }

    if((v[0]==0) && (v[1]==1) && (v[2]==1) && (v[3]==2) && (v[4]==3)){
        printf("Sequencia: Fibonacci!!!!\n");
        printf("O %do termo e: %d",n,fibo(n-1));
         return 0;
    }
    if((v[1]/v[0])==(v[2]/v[1]) && (v[0]!=v[1])){
        printf("Sequencia: Progressao Geometrica!!!!\n");
        printf("O %do termo e: %d",n,PG(v[1]/v[0],v,n));
         return 0;
    }
    printf("Conjunto aleatorios de numeros!!!");
    return 0;
}
