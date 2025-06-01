#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração e inicialização
    float z = 2.5;    // Variável float
    float *fp;        // Ponteiro para float
    
    fp = &z;          // fp aponta para z

    // Diferentes formas de acessar o valor 2.5
    printf("=== DIFERENTES FORMAS DE ACESSAR O VALOR ===\n");
    printf("*&z = %f\n", *&z);        // Operação: endereço de z -> desreferencia
    printf("*fp = %f\n", *fp);        // Desreferencia o ponteiro fp
    printf("**&fp = %f\n", **&fp);    // Endereço de fp -> desreferencia -> desreferencia

    return 0;
}

/*
ANÁLISE DOS OPERADORES:

1. *&z = 2.5
   - &z: obtém o endereço de z
   - *&z: desreferencia esse endereço, voltando ao valor original (2.5)

2. *fp = 2.5
   - fp: contém o endereço de z
   - *fp: acessa o valor nesse endereço (2.5)

3. **&fp = 2.5
   - &fp: obtém o endereço do ponteiro fp
   - *&fp: desreferencia para obter o valor de fp (que é o endereço de z)
   - **&fp: desreferencia novamente para obter o valor de z (2.5)

CONCLUSÃO: Todas as três expressões resultam em 2.5, mas representam 
diferentes níveis de indireção com ponteiros.
*/
