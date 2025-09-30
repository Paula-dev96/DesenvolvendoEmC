#include<stdio.h>
#include<string.h>

int main(){
    char linhadeonibus [10][10] = {"linha1", "linha2", "linha3", "linha4", "linha5", "linha6", "linha7", "linha8", "linha9", "linha10"};// vetor caractere para guardar o nome das linhas de nibus
    int tempodechegada [10] = {40, 23, 7, 14, 10, 55, 2, 35, 17, 12};//vetor que guarda o tempo em minutos de cada linha
    //cópias para ordenação
    char linhascresc[10][10], linhasdecresc[10][10];
    int temposcresc[10], temposdecresc[10];
    //Copiar dados mantendo a ordem original
    for (int i = 0; i < 10; i++){
        strcpy(linhascresc[i], linhadeonibus[i]);
        strcpy(linhasdecresc[i], linhadeonibus[i]);
        temposcresc[i] = tempodechegada[i];
        temposdecresc[i] = tempodechegada[i];
    }
    //Bubble sort crescente
    for(int i=0; i<10-1; i++){
        for(int j=0; j<10-1-i; j++){
            if(temposcresc[j]>temposcresc[j+1]){
                //trocar os tempos
                int temp = temposcresc[j];
                temposcresc[j]= temposcresc[j+1];
                temposcresc[j+1]=temp;
                //troca as linhas correspondentes
                char tempnome[10];
                strcpy(tempnome, linhascresc[j]);
                strcpy(linhascresc[j], linhascresc[j+1]);
                strcpy(linhascresc[j+1], tempnome);
            }
        }
    }
    //Bubble sort decrescente
    for (int i=0; i<10-1; i++){
        for(int j=0; j <10-1-i; j++){
            if (temposdecresc[j]<temposdecresc[j+1]){
                //trocar os tempos
                int temp = temposdecresc[j];
                temposdecresc[j] =temposdecresc[j+1];
                temposdecresc[j+1]= temp;
                // trocar as linhas correspondentes
                char tempnome[10];
                strcpy(tempnome, linhasdecresc[j]);
                strcpy(linhasdecresc[j], linhasdecresc[j+i]);
                strcpy(linhasdecresc[j+1], tempnome);
            }
        }
    }
    // Exibir os resultados
    printf("=== Ordem Original ===\n");
    for(int i= 0; i<10; i++){
        printf("%s - %d minutos\n",linhadeonibus[i], tempodechegada[i]);
    }
    printf("\n=== Ordem Crescente ===\n");
    for(int i = 0; i <10; i++){
        printf("%s - %d minutos\n", linhascresc[i], temposcresc[i]);
    }
printf("\n=== Ordem Decrescente ===\n");
for(int i=0; i<10;i++){
    printf ("%s - %d minutos\n", linhasdecresc[i], temposdecresc[i]);
}


    return 0;
}