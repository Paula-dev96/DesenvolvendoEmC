#include<stdio.h>
#include<string.h>

int main(){

    int pratoprincipal, bebida, sobremesa;// variáveis de scolha do usuário
    double total1 , total2,  total3 , precofinal, comdesconto;// total de cada categoria e preço final
    //strings para armazenar o nome do prato , bebida e sobremesa escolhidos
    char comanda1[50];
    char comanda2[50];
    char comanda3[50];

    printf("Restaurante Paula Nunes.\n Selecione suas opções:\n");
    //Esolha do prato principal
    printf("Prato principal:\n [1]Parmegiana de frango - R$32,00.\n [2]Nhoque à bolonhesa-R$28,00.\n [3]Feijoada - R$35,00.\n [4]Nenhuma opção.\n");
    scanf("%d",&pratoprincipal);

    switch(pratoprincipal)
    {
        case 1:
            strcpy(comanda1, "Parmegiana de frango");
            total1 = 32.0;
            break;

        case 2:
            strcpy(comanda1, "Nhoque a bolonhesa");
            total1 = 28.0;
            break;

        case 3:
            strcpy(comanda1, "Feijoada");
            total1 = 35.0;
            break;

        case 4:
            printf("Nenhum prato escolhido.\n");
            comanda1[0] = '\0';
            total1 = 0.0;
            break;

    }
    //Escolha da bebida
    printf("Bebidas:\n [1]Coca Cola - R$7,00.\n [2]Água - R$5.00.\n [3]Suco natral de laranja - R$9,00.\n [4]Nenhuma opção.\n");
    scanf("%d",&bebida);

    switch(bebida)
    {
        case 1:
            strcpy(comanda2, "Coca-cola");
            total2 = 7.0;
            break;

        case 2:
            strcpy(comanda2, "Água");
            total2 = 5.0;
            break;

        case 3:
            strcpy(comanda2, "Suco natural de laranja");
            total2 = 9.0;
            break;
        case 4:
            printf("Nenhuma bebida escolhida.\n");
            comanda2[0] = '\0';
            total2 = 0.0;
            break;
    }
    //Escolha da sobremesa
     printf("Sobremesa:\n [1]Pudim - R$12,00.\n [2]Mousse de maracujá - R$10,00.\n [3]Brownie com sorvete - R$15,00.\n [4]Proximo\n");
    scanf("%d",&sobremesa);

    switch(sobremesa)
    {
        case 1:
            strcpy(comanda3, "Pudim");
            total3 = 12.0;
            break;

        case 2:
            strcpy(comanda3, "Mousse de maracujá");
            total3 = 10.0;
            break;

        case 3:
            strcpy(comanda3, "Brownie com sorvete");
            total3 = 15.0;
            break;
        case 4:
            printf("Nenhuma sobremesa escolhida escolhida.\n");
            comanda3[0] = '\0';
            total3 = 0.0;
            break;
        }
        if ((pratoprincipal>=1 && pratoprincipal <=3)&&
            (bebida>=1 && bebida <=3)&&
            (sobremesa>=1 && sobremesa <=3))
        precofinal = total1 + total2 + total3;
    {
        printf("\nRESUMO DO PEDIDO; \n");
        printf("Prato escolhido: %s\n", comanda1);
        printf("Bebida escolhida: %s\n", comanda2);
        printf("sobremesa escolhida: %s\n", comanda3);
    //Se  valor final for maior que R$50,00 aplic-se 5% de desconto
       if (precofinal>50){
        comdesconto = precofinal*0.95;//desconto
        printf("Preço sem desconto R$%.2f\n", precofinal);
        printf("Preço final com 5%% de desconto: R$%.2f\n", comdesconto);
       } else {
        printf("Preço final: R$%.2f\n", precofinal);
       }
    
        return 0;
    }
}
