#include <stdio.h>

int maior(int v1, int v2){
    if (v1>v2)
        return v1;
    else
        return v2;
}
int menor(int v1, int v2){
    if (v1<v2)
        return v1;
    else
        return v2;
}
int MAIOR3(int v1, int v2, int v3){
    if ((v1>v2)&&(v1>v3))
        return v1;
    if ((v2>v1)&&(v2>v3))
        return v2;
    if ((v3>v1)&&(v3>v2))
        return v3;
}
int MENOR3(int v1, int v2, int v3){
    if ((v1<v2)&&(v1<v3))
        return v1;
    if ((v2<v1)&&(v2<v3))
        return v2;
    if ((v3<v1)&&(v3<v2))
        return v3;
}
int main(){
    int a, b, c, i=0, resposta, R;
    do{
        printf("DESCUBRA O MAIOR E O MENOR VALOR!\n");
        printf("1 - Tentar com DOIS valores\n");
        printf("2 - Tentar com TRES valores\n");
        printf("Resposta 1 ou 2: ");
        scanf("%d", &R);
        if (R==1){
            system("cls");
            printf("Valor 1: ");
            scanf("%d", &a);
            printf("Valor 2: ");
            scanf("%d", &b);
            printf("Maior valor = %d\n", maior(a, b));
            printf("Menor valor = %d\n", menor(a, b));
        }
        if (R==2){
            system("cls");
            printf("Valor 1 = ");
            scanf("%d", &a);
            printf("Valor 2 = ");
            scanf("%d", &b);
            printf("Valor 3 = ");
            scanf("%d", &c);
            printf("Maior valor = %d\n", MAIOR3(a, b, c));
            printf("Menor valor = %d\n", MENOR3(a, b, c));
        }
        printf("Tentar de novo?[1/0]:  ");
        scanf("%d", &resposta);
        i += i;
        system("cls");
    }while(resposta==1);
    return 0;
}
