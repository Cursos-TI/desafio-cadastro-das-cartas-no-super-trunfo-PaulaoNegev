#include <stdio.h>

int main()
{
    // Declarando as variáveis para o primeiro estado
    char estado, nome_da_cidade[40], codigo_da_cidade[3];
    int populacao, num_de_pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita;

    // Declarando as variáveis para o segundo estado
    char estado2, nome_da_cidade2[40], codigo_da_cidade2[3];
    int populacao2, num_de_pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Mensagem de boas-vindas ao jogo
    printf("Bem vindo ao Super Trunfo!\n");

    // Início da coleta de dados para a primeira carta
    printf("Responda as questões a seguir para coletar os dados da primeira carta\n");
    printf("Digite uma letra de 'A' a 'H' para atribuir ao primeiro estado: ");
    scanf(" %c", &estado);

    printf("Agora, insira dois dígitos numéricos para atribuir a primeira cidade: ");
    scanf("%s", codigo_da_cidade);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade);

    printf("Qual é a população dessa cidade? ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²) dessa cidade: ");
    scanf("%f", &area);

    printf("Insira o PIB (em bilhões de reais) da cidade: ");
    scanf("%f", &pib);

    printf("Qual é o número de pontos turísticos que a cidade possui? ");
    scanf("%d", &num_de_pontos_turisticos);

    // Início da coleta de dados para a segunda carta
    printf("Agora, iremos coletar os dados da segunda carta\n");
    printf("Digite uma letra de 'A' a 'H' para atribuir ao segundo estado: ");
    scanf(" %c", &estado2);

    printf("Agora, insira dois dígitos numéricos para atribuir a segunda cidade: ");
    scanf("%s", codigo_da_cidade2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Qual é a população dessa cidade? ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) dessa cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB (em bilhões de reais) da cidade: ");
    scanf("%f", &pib2);

    printf("Qual é o número de pontos turísticos que a cidade possui? ");
    scanf("%d", &num_de_pontos_turisticos2);

    // Utlizando os operadores matemáticos para calcular densidade populacional das cidades e PIB per capita
    densidade_populacional = (float)populacao / area;
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita = (float)pib / populacao;
    pib_per_capita2 = (float)pib2 / populacao2;

    // Exibindo as informações coletadas das duas cartas
    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", estado, estado, codigo_da_cidade, nome_da_cidade, populacao, area, pib, num_de_pontos_turisticos, densidade_populacional, pib_per_capita);
    printf("\nCarta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", estado2, estado2, codigo_da_cidade2, nome_da_cidade2, populacao2, area2, pib2, num_de_pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    // Finalizando o programa
    return 0;
}
