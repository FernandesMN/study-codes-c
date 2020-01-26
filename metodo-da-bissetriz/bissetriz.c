#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int count = 0; //contador
    int indice = 0, valorR = 0, inter = 0; //indice da funcao, raiz e interacoes
    float pos = 0.0, neg = 0.0; //o valor que e positivo e o negativo
    float x = 0.0, fx = 0.0; //x da funcao, funcao
    float a = 0.0, b = 0.0; //intervalo

    printf("Coletando a funcao\n\n");
    printf("X^: ");
    scanf("%d", &indice);
    printf("X^%d - : ", indice);
    scanf("%d", &valorR);

    system("clear");

    printf("Numero de interacoes: ");
    scanf("%d", &inter);

    system("clear");

    printf("Intervalo: ");
    scanf("%f %f", &a, &b);

    system("clear");

    printf("Sua funcao: x^%d - %d\n",indice, valorR);
    printf("Intervalo: (%.1f,%.1f)\n",a, b);
    printf("Interacoes: %d\n\n", inter);

    if(((pow(a,indice) - valorR) * (pow(b,indice) - valorR)) < 0){
        
        if((pow(a,indice) - valorR)< 0){
            neg = a;
            pos = b;
        }
        else{
            neg = b;
            pos = a;
        }

        for(count = 1; count <= inter; count++){
            x = (float)((pos + neg) / 2);
            fx = (float)(pow(x,indice) - valorR);
            if(fx < 0.0){
                printf("Valor do positivo = %f e negativo = %f\n",pos, neg);
                printf("x[%d] = %.5f; f(x[%d]) = %.5f (valor de f(x) < 0)\n\n",count, x, count, fx);
                neg = (float)x;
            }
            if(fx > 0.0){
                printf("Valor do positivo = %f e negativo = %f\n",pos, neg);
                printf("x[%d] = %.5f; f(x[%d]) = %.5f (valor de f(x) > 0)\n\n",count, x, count, fx);
                pos = (float)x;
            }
        }
        printf("Valor final: %.5f\n",x);
    }
    else{
        printf("Nao existem raizes nesse intervalo.\n");
    }
    
    return 0;
}