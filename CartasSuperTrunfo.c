#include <stdio.h>

int main(){


   char Estado[20] = "Ceara";
   char Codigo[50] = "A01";
   char Cidade[50] = "Fortaleza";
   int População;
   float Área;
   float PIB;
   int Pontos turisticos;


     printf("Nome do Estado: \n");
     scanf("%s", &Estado);


     printf("Codigo da Carta: \n");
     scanf("%s", &Codigo);


    printf("Nome da Cidade: \n");
    scanf("%s", &Cidade);


    printf("Numero de Habitantes: \n");
    scanf("%d", &População);


    printf("Area em quilometros quadrados: \n");
    scanf("%f", &Área);


    printf("O Produto interno bruto da cidade: \n");
    scanf("%f", &PIB);


    printf("Numero de pontos turisticos: \n");
    scanf("%d", &Pontos turisticos);



    return 0;
}
