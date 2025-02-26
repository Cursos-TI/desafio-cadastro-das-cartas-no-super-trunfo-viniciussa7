#include <stdio.h>

    // Desafio SUPER TRUNFO
    // Cadatramento de cartas
    // Codigo inicial para cadastramento de cartas de cidades

int main (){
    // simplificar:Defina as ordens das variaveis com espaço para umma melhor visualização.
    // exemplo: inciar pelo nome do Estado em segida, codigo da carta,nome da cidade ,população, área, PIB, número de pontos turísticos

    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações que forem solicitadas dentro de cada variavel

    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("SUPER TRUFO!\n");

    char Estado[30];
    char codigodacarta[20];
    char nomecidade[30];
    int populacao;
    float areakm;
    float PIB;
    int numerodepontosturisticos;

        //sintaxe do scanf
    
        printf("Estado: ");
        scanf("%c",&Estado);
        printf("Codigo da carta: ");
        scanf("%d",&codigodacarta);
        printf("Nome da cidade: ");
        scanf("%s",&nomecidade);
        printf("População: ");
        scanf("%d",&populacao);
        printf("Area em km² : ");
        scanf("%f",&areakm);
        printf("PIB: ");
        scanf("%f",&PIB);
        printf("Numero de Pontos Turisticos: ");
        scanf("%d",&numerodepontosturisticos );




return 0;



}
