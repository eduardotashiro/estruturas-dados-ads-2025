#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Declaração de variáveis e ponteiros
    int a, b, *p1, *p2;

    // Inicialização
    a = 4;        // a = 4
    b = 3;        // b = 3
    p1 = &a;      // p1 aponta para a
    p2 = p1;      // p2 também aponta para a (mesmo endereço que p1)

    // Operações complexas em uma linha
    *p2 = *p1 + 3;    // *p2 = 4 + 3 = 7 (modifica 'a' para 7)
    b = b * (*p1);    // b = 3 * 7 = 21
    (*p2)++;          // incrementa o valor apontado por p2 (a vira 8)
    
    p1 = &b;          // p1 agora aponta para b

    // Resultado final
    printf("=== RESULTADO FINAL ===\n");
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);  // *p1 = 21 (valor de b), *p2 = 8 (valor de a)
    printf("a = %d, b = %d\n", a, b);           // a = 8, b = 21

    return 0;
}

/*
PASSO A PASSO DA EXECUÇÃO:

Estado inicial:
- a = 4, b = 3
- p1 aponta para a, p2 aponta para a

Após *p2 = *p1 + 3:
- a = 7 (modificado através de p2)

Após b = b * (*p1):
- b = 3 * 7 = 21

Após (*p2)++:
- a = 8 (incrementado através de p2)

Após p1 = &b:
- p1 agora aponta para b
- p2 ainda aponta para a

Resultado: *p1 = 21, *p2 = 8, a = 8, b = 21
*/
