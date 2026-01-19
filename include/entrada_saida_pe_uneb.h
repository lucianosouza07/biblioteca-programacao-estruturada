#ifndef ENTRADA_SAIDA_PE_UNEB
#define ENTRADA_SAIDA_PE_UNEB

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>

/*
 * Nome da Função: calcular_media_interativa
 * Parâmetros + O que representam:
 * - Nenhum (void): Processa entrada interna.
 * Casos de uso: Solicita números ao usuário em loop (até uma condição de parada) e retorna a média dos valores inseridos.
 */
float calcular_media_interativa();



/*
 * Nome da Função: encontrar_menor_valor_inserido
 * Parâmetros + O que representam:
 * - Nenhum (void): Processa fluxo de entrada.
 * Casos de uso: Lê uma sequência de entradas do usuário e retorna o menor valor digitado durante a sessão.
 */
int encontrar_menor_valor_inserido();



/*
 * Nome da Função: numero_igual_primeiro
 * Parâmetros + O que representam:
 * - Nenhum (void): Lógica baseada em fluxo de entrada.
 * Casos de uso: Verifica quantos números subsequentes em uma entrada de dados são iguais ao primeiro número fornecido (contagem de ocorrências relativas).
 */
int numero_igual_primeiro();


/*
 * Nome da Função: contar_pares_impares
 * Parâmetros + O que representam:
 * - *numpar: Ponteiro para armazenar a contagem de pares (passagem por referência).
 * - *numimpar: Ponteiro para armazenar a contagem de ímpares (passagem por referência).
 * Casos de uso: Lê múltiplos valores e atualiza, via ponteiros, os contadores de números pares e ímpares simultaneamente.
 */
void contar_pares_impares(int *numpar, int *numimpar);

#endif
