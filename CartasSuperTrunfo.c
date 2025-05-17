#include <stdio.h>

int main() {
    // Definição das variáveis com nomes válidos
    int codigo;
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;

    // Cadastro das Cartas
    printf("=== Cadastro da Carta - São Paulo ===\n");

    // Preenchendo os dados manualmente (baseado nas informações que tentou usar)
    codigo = 11;
    snprintf(nome, sizeof(nome), "São Paulo");
    populacao = 44411238;
    area = 248219.48;          // em km²
    pib = 3500000000000.00;    // R$ 3,5 trilhões em reais
    pontosTuristicos = 1;      // Exemplo: Museu de Arte de São Paulo

    // Exibição dos Dados
    printf("\n--- Carta Cadastrada ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2lf\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}