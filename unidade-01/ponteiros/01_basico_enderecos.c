#include <stdio.h>

int main() {
    // Declaração de variáveis
    int a = 10;  // Variável 'a' inicializada com valor 10
    int b, c;    // Variáveis 'b' e 'c' não inicializadas (valores indefinidos)

    // Primeira impressão: mostra endereços e valores iniciais
    printf("=== ESTADO INICIAL ===\n");
    printf("&a = %p, a = %d\n", &a, a);  // Endereço e valor de 'a'
    printf("&b = %p, b = %d\n", &b, b);  // Endereço de 'b' e valor indefinido
    printf("&c = %p, c = %d\n\n", &c, c); // Endereço de 'c' e valor indefinido

    // Atribuição de valores
    b = 20;      // 'b' recebe o valor 20
    c = a = b;   // Atribuição múltipla: 'a' recebe 'b' (20), depois 'c' recebe 'a' (20)

    // Segunda impressão: após as atribuições
    printf("=== APÓS ATRIBUIÇÕES ===\n");
    printf("&a = %p, a = %d\n", &a, a);  // 'a' agora vale 20
    printf("&b = %p, b = %d\n", &b, b);  // 'b' vale 20
    printf("&c = %p, c = %d\n\n", &c, c); // 'c' vale 20

    return 0;    
}

/*
CONCEITOS DEMONSTRADOS:
1. Cada variável tem um endereço único na memória (&variavel)
2. Variáveis não inicializadas contêm valores indefinidos
3. Atribuição múltipla (c = a = b) é executada da direita para esquerda
4. Os endereços permanecem os mesmos, apenas os valores mudam
*/
