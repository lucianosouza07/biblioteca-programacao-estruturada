# Biblioteca de Programação Estruturada

Este repositório contém a implementação modular de soluções para listas de exercícios de Programação Estruturada (Prof. Artur Henrique Kronbauer - UNEB). O projeto foi arquitetado visando alta coesão e baixo acoplamento através da separação entre headers (`.h`) e implementações (`.c`).

## Visão Geral

A biblioteca `biblioteca-programcao-estruturada` consolida algoritmos fundamentais de lógica de programação, manipulação de memória e estruturas de dados estáticas. O código foi refatorado a partir das quatro listas de exercícios presentes na pasta `pdfs`, organizado nos seguintes módulos:

*   **`entrada_saida_pe_uneb`**: Funções utilitárias para interação com o usuário (IO), correspondente a exercícios introdutórios da **Lista 1**.
*   **`matematica_basica_pe_uneb`**: Operações aritméticas, conversões de unidades e lógica condicional simples (ex: cálculo de combustível, conversão de moedas), cobrindo o restante da **Lista 1**.
*   **`sequencias_pe_uneb`**: Algoritmos iterativos e recursivos envolvendo laços de repetição (ex: Fatorial, Fibonacci, identificação de primos), referentes à **Lista 2**.
*   **`vetores_pe_uneb`**: Manipulação de vetores/arrays unidimensionais, incluindo ordenação, busca, inversão e intercalação, soluções para a **Lista 3**.

O arquivo `pe_uneb.h` atua como um *header* unificador, permitindo o acesso a todas as funcionalidades com uma única diretiva de inclusão.

## Como utilizar a biblioteca?

Para integrar esta biblioteca ao seu projeto, siga os passos abaixo, garantindo que o compilador consiga localizar tanto os cabeçalhos quanto os códigos fonte.

### 1. Configuração do Ambiente
Clone este repositório ou copie a pasta `include` para a raiz do seu projeto.

### 2. Inclusão no Código
No seu arquivo principal (ex: main.c), você pode incluir a biblioteca inteira ou apenas os módulos necessários.

**Exemplo (`main.c`):**

```c
// Inclui todas as funcionalidades
#include "include/pe_uneb.h"

// Ou inclua apenas o necessário (ex: módulo de vetores/arrays):
// #include "include/vetores_pe_uneb.c"

int main() {
    int vetor[5] = {5, 2, 9, 1, 6};
    
    // Exemplo hipotético usando uma função do módulo de vetores (Lista 3 - Questão 10)
    ordenar_bubble_sort(vetor, 5); 
    
    // Exemplo hipotético usando matemática (Lista 1 - Questão 1)
    int soma = calcula_soma(10, 20);
    printf("Soma: %d\n", soma);

    return 0;
}
```

### 3. Compilação
Caso não esteja usando uma IDE (ex: Dev C++), utilize o `gcc` (ou compilador de sua preferência compatível com C99). É crucial informar ao compilador onde encontrar os *headers* (flag `-I`) e compilar os arquivos de implementação (`src/*.c`) junto com seu programa principal.

Abra o terminal na raiz do projeto e execute:

```bash
gcc -std=c99 -I./include src/*.c main.c -o programa
```

Para executar o programa compilado:

*   **Linux/Mac:** `./programa`
*   **Windows:** `programa.exe`

## Observações

*   **Protótipos:** Todos os arquivos de cabeçalho (`.h`) possuem *Include Guards* (`#ifndef`, `#define`, `#endif`) para prevenir problemas de dupla inclusão durante a compilação.
*   **Didática:** Os nomes das funções, parâmetros + o que representam e casos de uso foram adicionados nos arquivos headers de cada módulo para o entendimento de quem a for utilizar.