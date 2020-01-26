#include <stdio.h>
#include <math.h>

float delta(float V1, float V2, float V3){
    float D;
    D = (V2*V2) - (4*V1*V3);
    return D;
}
float bhask(float V1, float V2){
    float R;
    R = ((-1)*V2)/(2*V1);
    return R;
}
float bhask1(float V1, float V2, float Del){
    float R1;
    R1 = ((-1)*V2 + sqrt(Del))/(2*V1);
    return R1;
}
float bhask2(float V1, float V2, float Del){
    float R2;
    R2 = ((-1)*V2 - sqrt(Del))/(2*V1);
    return R2;
}
int main(){
    float a, b, c, Del, raiz, raiz1, raiz2;
    int res, i;
    i = 0;
    do{
        system("cls");
        printf("Valor de a: ");
        scanf("%f", &a);
        printf("Valor de b: ");
        scanf("%f", &b);
        printf("Valor de c: ");
        scanf("%f", &c);
        if (a==0){
            printf("Não eh uma função do segundo grau.");
        }
        else{
            Del = delta(a, b, c);
            printf("Delta = %.2f\n", Del);
            if (Del>0){
                raiz1 = bhask1(a, b, Del);
                raiz2 = bhask2(a, b, Del);
                printf("Raiz 1 = %.2f\nRaiz 2 = %.2f\n", raiz1, raiz2);
            }
            if (Del==0){
                raiz = bhask(a,b);
                printf("Raiz = %.2f\n", raiz);
            }
            if (Del<0){
                printf("Raiz Complexa 1 = %.2f + i.%.2f\n", ((-1)*b)/(2*a), sqrt((-1)*Del));
                printf("Raiz Complexa 2 = %.2f - i.%.2f\n", ((-1)*b)/(2*a), sqrt((-1)*Del));
            }
        }
        i += 1;
        printf("Calcular mais uma vez?[1/0]: ");
        scanf("%d", &res);
    }while(res == 1);
    return 0;
}
