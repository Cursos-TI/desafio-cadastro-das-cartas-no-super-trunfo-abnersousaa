#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char letra;
	char codigo[50];
	char cidade[20];
	int populacao;
	float areakm2;
	float pib;
	int numeroturistas;
	float densidadePopulacional;
    float pibpc;
    

	    printf("Qual é o Estado? \n");
         scanf("%c", &letra);

        printf("Qual o codigo da carta? \n");
         scanf("%s", codigo);

        printf("Qual o nome da Cidade?\n");
         scanf("%s", cidade);

        printf("Qual o numero de Habitantes?\n");
         scanf("%d", &populacao); 

        printf("Qual a Area da cidade em kms²?\n");
         scanf("%f", &areakm2);

        printf("Qual o Produto interno bruto da cidade?\n");
         scanf("%f", &pib);

        printf("Qual a quantidade de pontos turisticos da cidade?\n");
         scanf("%d", &numeroturistas);

         densidadePopulacional = (float)populacao / areakm2;

         pibpc = (pib * 1000000000) / populacao;


        printf("Estado: %c\n", letra); 
        printf("Codigo: %s\n", codigo); 
        printf("Cidade: %s\n", cidade);
        printf("Populacao: %d\n", populacao); 
        printf("Area: %f", areakm2);printf(" KM2\n");
        printf("PIB: %f", pib);printf(" Bilioes de Reais\n");
        printf("Numero de Pontos Turisticos: %d\n", numeroturistas); 
        printf("A Densidade Populacional é: %.2f\n", densidadePopulacional);
        printf("O PIB per capita é: %.2f\n", pibpc);

    
   
   
    return 0;	
}
