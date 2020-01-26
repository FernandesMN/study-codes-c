#include <stdio.h>

int main(){
    int i;
    for(i=0;i<=127;i++){
        printf("D = %d  ", i);
        printf("H = %x  ", i);
        printf("C = %c  \n", i);
    }
    return 0;
}
