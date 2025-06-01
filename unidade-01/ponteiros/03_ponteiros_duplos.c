#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração: variável -> ponteiro -> ponteiro duplo
    int a = 10;          // Variável inteira
    int *p1 = &a;        // Ponteiro simples apontando para 'a'
    int **p2 = &p1;      // Ponteiro duplo apontando para 'p1'

    // Estado inicial
    printf("=== ESTADO INICIAL ===\n");
    printf("&a = %p, a = %d\n", &a, a);                           // Variável 'a'
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);      // Ponteiro p1
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2); // Ponteiro duplo p2

    // Modificação através do ponteiro duplo
    **p2 = 99;  // Modifica 'a' através de dois níveis de indireção

    // Estado após modificação
    printf("=== APÓS MODIFICAÇÃO VIA PONTEIRO DUPLO ===\n");
    printf("&a = %p, a = %d\n", &a, a);                           // 'a' agora vale 99
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);      // p1 ainda aponta para 'a'
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2); // p2 aponta para p1

    return 0;
}

/*
CONCEITOS DEMONSTRADOS:
1. Ponteiro duplo: int **p (ponteiro para ponteiro)
2. Níveis de indireção:
   - p2: endereço de p1
   - *p2: valor de p1 (que é o endereço de a)
   - **p2: valor de a
3. Modificação através de múltiplos níveis: **p2 = valor
4. Cadeia de ponteiros: a <- p1 <- p2
*/
