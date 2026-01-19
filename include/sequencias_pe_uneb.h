#ifndef SEQUENCIAS_PE_UNEB
#define SEQUENCIAS_PE_UNEB

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>


/*
 * Nome da Função: imprimir_tabuada
 * Parâmetros + O que representam:
 * - numero: O número base da tabuada.
 * Casos de uso: Gerar e exibir a tabela de multiplicação (de 1 a 10) para o número fornecido.
 */
void imprimir_tabuada(int numero);

/*
 * Nome da Função: imprimir_sequencia_fibonacci
 * Parâmetros + O que representam:
 * - quantidade: Número de termos da sequência a serem gerados.
 * Casos de uso: Exibir os 'n' primeiros termos da série onde cada número é a soma dos dois anteriores.
 */
void imprimir_sequencia_fibonacci(int quantidade);

/*
 * Nome da Função: somar_impares_intervalo
 * Parâmetros + O que representam:
 * - inicio: Limite inferior do intervalo.
 * - fim: Limite superior do intervalo.
 * Casos de uso: Iterar entre dois números e acumular a soma apenas dos valores ímpares encontrados nesse alcance.
 */
int somar_impares_intervalo(int inicio, int fim);

#endif 
