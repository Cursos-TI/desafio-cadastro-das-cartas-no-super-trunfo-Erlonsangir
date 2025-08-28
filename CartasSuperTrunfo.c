#include <stdio.h>

int main(){

// Carta 1
   char Estado1;
   char Codigo1[10];
   char Cidade1[50];
   int Populacao1;
   float Area1;
   float PIB1;
   int Pontos_turisticos1;

   // Carta 2 
      char Estado2;
      char Codigo2[20];
      char Cidade2[50];
      int Populacao2;
      float Area2;
      float PIB2;
      int Pontos_turisticos2;


// Cadastro da Primeira Carta
printf("*** Carta 1 ***\n");

     printf("Digite o estado: \n");
     scanf("%c", &Estado1);

     printf("Digite o código da carta: \n");
     scanf("%s", &Codigo1);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade1);


    printf("Digite a População: \n");
    scanf("%d", &População1);


    printf("Digite  a área em Km²: \n");
    scanf("%f", &Área1);


    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &PIB1);


    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos1);


    // Cadastro da segunda carta
    printf("*** Carta 2 ***\n");

    printf("Digite o estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da cidade \n");
    scanf("%s", &Cidade2);

    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área em Km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB em bilhoes de reais: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos2);

    // Saida de Dados
    printf("*** Carta 1 ***\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d habitantes \n", Populacao1);
    printf("Área: %.2f Km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Pontos turisticos: %d \n", Pontos_turisticos1);

    printf("*** Carta 2 ***\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d habitantes \n", Populacao2);
    printf("Área: %.2f Km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Pontos turisticos: %d \n", Pontos_turisticos2);


    return 0;
    

}
