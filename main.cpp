/*
Aluno: Elionay da Fonseca Vieira
Atividade: Simulação de Desativação de Bomba
Linguagem: C
Padrão de nomenclatura: PascalCase
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int TempoAtual = 10;

    printf("========================================\n");
    printf("      CENTRAL DE CONTROLE DE RISCO      \n");
    printf("========================================\n\n");

    printf("Procedimento de seguranca iniciado.\n\n");

    // Estrutura do-while usada para executar a contagem ao menos uma vez
    do
    {
        printf("Tempo para estabilizacao: %d segundos\n", TempoAtual);
        sleep(1);
        TempoAtual--;

    } while (TempoAtual >= 0);

    printf("\nRisco controlado com sucesso.\n");
    printf("Bomba desativada com sucesso!\n");

    return 0;
}