#include <stdio.h>

void ordem(int v1, int v2){
    int i;
    if(v1<v2){
        printf("Ordem crescente:\n");
        for(i=v1;i<=v2;i++)
            printf("%d ", i);
    }
    if(v2<v1){
        printf("Ordem decrescente:\n");
        for(i=v1;i>=v2;i--)
            printf("%d ", i);
    }
    if(v1==v2)
        printf("Valores iguais!");
}
int main(){
    int num1, num2;
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    ordem(num1, num2);
    return 0;
}
