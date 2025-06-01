#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variável e ponteiros
    int a = 10;        // Variável inteira com valor 10
    int *p1 = NULL;    // Ponteiro inicializado com NULL (boa prática)
    int *p2;           // Ponteiro não inicializado (perigoso!)

    // Estado inicial: antes de apontar para 'a'
    printf("=== ESTADO INICIAL ===\n");
    printf("&a = %p, a = %d\n", &a, a);           // Endereço e valor de 'a'
    printf("&p1 = %p, p1 = %p\n", &p1, p1);      // Endereço de p1 e seu valor (NULL)
    printf("&p2 = %p, p2 = %p\n\n", &p2, p2);    // Endereço de p2 e valor indefinido

    // Fazendo os ponteiros apontarem para 'a'
    p1 = &a;    // p1 agora aponta para o endereço de 'a'
    p2 = p1;    // p2 recebe o mesmo endereço que p1 (ambos apontam para 'a')
    *p2 = 4;    // Modifica o valor de 'a' através do ponteiro p2

    // Estado final: após as operações com ponteiros
    printf("=== APÓS OPERAÇÕES COM PONTEIROS ===\n");
    printf("&a = %p, a = %d\n", &a, a);                    // 'a' agora vale 4
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1); // p1 aponta para 'a'
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2); // p2 também aponta para 'a'
    
    return 0;
}

/*
CONCEITOS DEMONSTRADOS:
1. Declaração de ponteiros: int *p
2. Inicialização com NULL é uma boa prática
3. Atribuição de endereço: p = &variavel
4. Cópia de ponteiros: p2 = p1 (ambos apontam para o mesmo local)
5. Modificação através de ponteiro: *p = valor
6. Um ponteiro tem seu próprio endereço (&p) e armazena um endereço (p)
*/
