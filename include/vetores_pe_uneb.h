#ifndef VETORES_PE_UNEB
#define VETORES_PE_UNEB

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>

/*
 * Nome da Função: calcular_produto_vetor
 * Parâmetros + O que representam:
 * - vetor[]: Vetor de inteiros contendo os operandos.
 * - tamanho: Quantidade de elementos no vetor.
 * Casos de uso: Calcular a produtória (multiplicação sequencial) de todos os elementos do vetor.
 */
int calcular_produto_vetor(int vetor[], int tamanho);



/*
 * Nome da Função: multiplicar_vetores
 * Parâmetros + O que representam:
 * - vetor1[]: Primeiro vetor operando.
 * - vetor2[]: Segundo vetor operando.
 * - resultado[]: Vetor de destino para o produto.
 * - tamanho: Comprimento dos vetores.
 * Casos de uso: Realizar a multiplicação elemento a elemento entre dois vetores e armazenar em um terceiro.
 */
void multiplicar_vetores(int vetor1[], int vetor2[], int resultado[], int tamanho);



/*
 * Nome da Função: intercalar_vetores
 * Parâmetros + O que representam:
 * - vetor1[]: Primeiro vetor de origem.
 * - vetor2[]: Segundo vetor de origem.
 * - resultado[]: Vetor de destino (deve ter tamanho suficiente para vetor1 + vetor2).
 * - tamanho: Tamanho base dos vetores de origem.
 * Casos de uso: Mesclar dois vetores alternando seus elementos (ex: v1[0], v2[0], v1[1], v2[1]...).
 */
void intercalar_vetores(int vetor1[], int vetor2[], int resultado[], int tamanho);



/*
 * Nome da Função: copiar_impares_para_vetor
 * Parâmetros + O que representam:
 * - origem[]: Vetor fonte contendo números mistos.
 * - destino[]: Vetor alvo para armazenar os ímpares.
 * - tamanho: Tamanho do vetor de origem.
 * Casos de uso: Filtragem de dados, extraindo apenas números ímpares para processamento separado.
 */
int copiar_impares_para_vetor(int origem[], int destino[], int tamanho);



/*
 * Nome da Função: inverter_vetor
 * Parâmetros + O que representam:
 * - vetor[]: O vetor a ser manipulado.
 * - tamanho: Número de elementos do vetor.
 * Casos de uso: Reverter a ordem dos elementos do array "in-place" (o primeiro troca com o último, etc).
 */
void inverter_vetor(int vetor[], int tamanho);



/*
 * Nome da Função: calcular_intersecao_vetores
 * Parâmetros + O que representam:
 * - vetor1[]: Primeiro conjunto de dados.
 * - vetor2[]: Segundo conjunto de dados.
 * - resultado[]: Vetor para armazenar os elementos comuns.
 * - tamanho: Dimensão dos vetores analisados.
 * Casos de uso: Encontrar elementos presentes em ambos os vetores simultaneamente na mesma posição.
 */
int calcular_intersecao_vetores(int vetor1[], int vetor2[], int resultado[], int tamanho);



/*
 * Nome da Função: ordenar_bubble_sort
 * Parâmetros + O que representam:
 * - vetor[]: Vetor desordenado.
 * - tamanho: Quantidade de elementos.
 * Casos de uso: Ordenar os elementos do vetor em ordem crescente usando o algoritmo Bubble Sort.
 */
void ordenar_bubble_sort(int vetor[], int tamanho);


/*
 * Nome da Função: lervetor
 * Parâmetros + O que representam:
 * - vetor[]: Vetor em que os elementos de entrada serão armazenados.
 * - tamanho: Quantidade de elementos a ler.
 * - nome_vetor: Nome identificador (ex: 'VETOR A').
 * Casos de uso: Rotina de entrada de dados para preencher vetores/arrays via teclado.
 */
void lervetor(int vetor[], int tamanho, char nome_vetor);


/*
 * Nome da Função: exibir_vetor
 * Parâmetros + O que representam:
 * - vetor[]: Vetor/Array contendo os dados.
 * - tamanho: Quantidade de elementos a exibir.
 * - nome_vetor: Caractere identificador para rotulagem na saída.
 * Casos de uso: Rotina de saída para apresentar o conteúdo de vetores/arrays no console de forma formatada.
 */
void exibir_vetor(int vetor[], int tamanho, char nome_vetor);


/*
 * Nome da Função: remover_duplicados
 * Parâmetros + O que representam:
 * - origem[]: Vetor com possíveis repetições.
 * - destino[]: Vetor limpo resultante.
 * - tamanho: Tamanho do vetor original.
 * Casos de uso: Higienização de dados para garantir valores únicos no conjunto resultante.
 */
int remover_duplicados(int origem[], int destino[], int tamanho);


/*
 * Nome da Função: substituir_negativos_por_um
 * Parâmetros + O que representam:
 * - vetor[]: Vetor a ser processado e modificado.
 * - tamanho: Número de elementos.
 * Casos de uso: Normalização de dados ou tratamento de erro onde valores negativos são inválidos e substituídos por um valor padrão (1).
 */
void substituir_negativos_por_um(int vetor[], int tamanho);


/*
 * Nome da Função: buscar_valor_no_vetor
 * Parâmetros + O que representam:
 * - valor: O inteiro a ser procurado.
 * - vetor[]: O espaço de busca.
 * - tamanho: Limite da busca.
 * Casos de uso: Busca linear para verificar se um elemento existe no vetor, retornando índice ou flag booleana.
 */
int buscar_valor_no_vetor(int valor, int vetor[], int tamanho);


/*
 * Nome da Função: encontrar_maximo_vetor
 * Parâmetros + O que representam:
 * - vetor[]: Vetor de dados numéricos.
 * - tamanho: Quantidade de elementos.
 * Casos de uso: Identificar o maior valor numérico presente no conjunto de dados.
 */
int encontrar_maximo_vetor(int vetor[], int tamanho);


/*
 * Nome da Função: encontrar_posicao_extremo
 * Parâmetros + O que representam:
 * - tipo_extremo: Flag/Enum indicando se busca o Mínimo ou Máximo (1 p/ máximo e 2 p/ mínimo)
 * - vetor[]: Vetor de dados.
 * - tamanho: Quantidade de elementos.
 * Casos de uso: Retornar o índice (posição) onde se encontra o maior ou o menor valor do vetor.
 */
int encontrar_posicao_extremo(int tipo_extremo, int vetor[], int tamanho);

#endif 
