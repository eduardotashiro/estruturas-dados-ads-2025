#include <stdio.h>

int main() {
    int a;  // Variável para demonstração

    // Tamanho de uma variável específica
    printf("=== TAMANHO DE VARIÁVEL ESPECÍFICA ===\n");
    printf("sizeof(a) = %ld bytes\n\n", sizeof(a));

    // Tamanhos de tipos básicos
    printf("=== TAMANHOS DE TIPOS BÁSICOS ===\n");
    printf("sizeof(int) = %ld bytes\n", sizeof(int));
    printf("sizeof(short) = %ld bytes\n", sizeof(short));
    printf("sizeof(long) = %ld bytes\n", sizeof(long));
    printf("sizeof(unsigned long) = %ld bytes\n", sizeof(unsigned long));
    printf("sizeof(float) = %ld bytes\n", sizeof(float));
    printf("sizeof(double) = %ld bytes\n\n", sizeof(double));

    // Tamanhos de ponteiros (IMPORTANTE!)
    printf("=== TAMANHOS DE PONTEIROS ===\n");
    printf("sizeof(void *) = %ld bytes\n", sizeof(void *));
    printf("sizeof(int *) = %ld bytes\n", sizeof(int *));
    printf("sizeof(int **) = %ld bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));

    return 0;
}

/*
OBSERVAÇÕES IMPORTANTES:

1. TIPOS BÁSICOS:
   - int: geralmente 4 bytes
   - short: geralmente 2 bytes  
   - long: 8 bytes em sistemas 64-bit
   - float: 4 bytes
   - double: 8 bytes

2. PONTEIROS:
   - TODOS os ponteiros têm o mesmo tamanho!
   - Em sistemas 64-bit: 8 bytes
   - Em sistemas 32-bit: 4 bytes
   - Não importa o tipo para o qual apontam
   - Ponteiros simples, duplos, triplos: mesmo tamanho

3. POR QUE PONTEIROS TÊM TAMANHO FIXO?
   - Ponteiros armazenam endereços de memória
   - O tamanho do endereço depende da arquitetura do sistema
   - 64-bit = endereços de 8 bytes
   - 32-bit = endereços de 4 bytes

CONCLUSÃO: O tipo do ponteiro (int*, float*, etc.) serve apenas para 
o compilador saber como interpretar os dados no endereço apontado.
*/
