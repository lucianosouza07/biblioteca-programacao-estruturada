#ifndef MATEMATICA_BASICA_PE_UNEB
#define MATEMATICA_BASICA_PE_UNEB

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>

/*
 * Nome da Função: calcular_soma
 * Parâmetros + O que representam:
 * - a: Primeira parcela (float).
 * - b: Segunda parcela (float).
 * Casos de uso: Operação aritmética simples de adição com ponto flutuante.
 */
float calcular_soma(float a, float b);


/*
 * Nome da Função: calcular_media
 * Parâmetros + O que representam:
 * - vetor[]: Conjunto de valores para média.
 * - tamanho: Quantidade de valores no conjunto.
 * Casos de uso: Cálculo estatístico da média aritmética simples de um conjunto de dados.
 */
float calcular_media(float vetor[], int tamanho);


/*
 * Nome da Função: calcular_percentual
 * Parâmetros + O que representam:
 * - parte: O valor da parcela.
 * - total: O valor do todo (100%).
 * Casos de uso: Calcular a representatividade percentual de um valor em relação a um total.
 */
float calcular_percentual(float parte, float total);


/*
 * Nome da Função: inverter_numero
 * Parâmetros + O que representam:
 * - numero: Inteiro a ser invertido.
 * Casos de uso: Inverter a ordem dos dígitos de um inteiro (ex: 123 -> 321), comum em exercícios de lógica e criptografia básica.
 */
int inverter_numero(int numero);

/*
 * Nome da Função: verificar_propriedade
 * Parâmetros + O que representam:
 * - numero: Inteiro a ser testado.
 * Casos de uso: Validação se um número atende a uma regra matemática (soma dos dois primeiros digitos com os dois ultimos digitos ao quadrado é igual ao número).
 */
bool verificar_propriedade(int numero);



/*
 * Nome da Função: eh_par
 * Parâmetros + O que representam:
 * - numero: Valor inteiro para teste.
 * Casos de uso: Verificação de paridade (retorna true se par, false se ímpar).
 */
bool eh_par(int numero);



/*
 * Nome da Função: encontrar_maximo_tres
 * Parâmetros + O que representam:
 * - a, b, c: Três valores inteiros distintos.
 * Casos de uso: Lógica de comparação composta para retornar o maior valor entre três opções.
 */
int encontrar_maximo_tres(int a, int b, int c);



/*
 * Nome da Função: converter_velocidade
 * Parâmetros + O que representam:
 * - valor: Velocidade a ser convertida.
 * - tipo_conversao: Flag indicando a direção (ex: 1 para m/s->km/h, 2 para km/h->m/s).
 * Casos de uso: Conversão de unidades físicas de cinemática.
 */
float converter_velocidade(float valor, int tipo_conversao);


/*
 * Nome da Função: converter_moeda
 * Parâmetros + O que representam:
 * - valor: Montante monetário original.
 * - taxa_cambio: Fator multiplicativo de conversão.
 * Casos de uso: Aplicações financeiras para câmbio de moedas.
 */
float converter_moeda(float valor, float taxa_cambio);


/*
 * Nome da Função: calcular_fatorial
 * Parâmetros + O que representam:
 * - numero: Inteiro não-negativo n.
 * Casos de uso: Cálculo matemático de n! (produtório de 1 até n), usado em análise combinatória.
 */
int calcular_fatorial(int numero);


/*
 * Nome da Função: eh_primo
 * Parâmetros + O que representam:
 * - numero: Inteiro positivo para teste.
 * Casos de uso: Algoritmo de primalidade para verificar se o número possui apenas dois divisores (1 e ele mesmo).
 */
bool eh_primo(int numero);

#endif 
