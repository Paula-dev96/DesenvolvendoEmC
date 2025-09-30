#include <stdio.h>
#include<string.h>

int main(){

    char diasdasemana[7][10] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};
    int almocosservidos[7] = {15, 20, 32, 28, 43, 48, 52};
        for(int i = 0; i < 7; i++){
            printf("Almoços vendidos na: %s", diasdasemana[i]);
            scanf ("%d", &almocosservidos[i]);
        }
        printf("\n Resumo da semana:\n");
        for(int i=0; i<7; i++){
            printf("%s: %d\n", diasdasemana[i], almocosservidos[i]);
        }
    return 0;
}