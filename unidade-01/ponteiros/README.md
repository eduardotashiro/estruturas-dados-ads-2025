#  Estudos de Ponteiros em C

Este repositório faz parte do meu processo de aprendizado em **Estrutura de Dados** durante a graduação em Análise e Desenvolvimento de Sistemas. Aqui estou registrando meus estudos sobre **ponteiros** em linguagem C


---

## O que são ponteiros?

Em C, ponteiros são variáveis que armazenam **endereços de memória**. Eles permitem acessar e manipular diretamente o conteúdo dessas posições na memória, o que é essencial em estruturas como **listas, pilhas, filas e alocação dinâmica**.

---

Este repositório documenta meu aprendizado sobre ponteiros em linguagem C, parte dos meus estudos em Estruturas de Dados.

## Conceitos Estudados

### O que são Ponteiros?
- **Ponteiro**: Variável que armazena o endereço de memória de outra variável
- **Operador &**: Obtém o endereço de uma variável
- **Operador \***: Desreferencia um ponteiro (acessa o valor no endereço)

### Conceitos Importantes
- Ponteiros simples (\`int \*p\`)
- Ponteiros duplos (\`int \*\*p\`)
- Ponteiros para diferentes tipos de dados
- Tamanho de ponteiros na memória

##  Exercícios Práticos

### 1. Básico - Endereços e Valores
**Arquivo:** \`01_basico_enderecos.c\`

Demonstra como variáveis são armazenadas na memória e como acessar seus endereços.

### 2. Ponteiros Simples
**Arquivo:** \`02_ponteiros_simples.c\`

Introduz o conceito de ponteiros, como declará-los e usá-los para modificar valores.

### 3. Ponteiros Duplos
**Arquivo:** \`03_ponteiros_duplos.c\`

Explora ponteiros que apontam para outros ponteiros (ponteiros duplos).

### 4. Operadores de Indireção
**Arquivo:** \`04_operadores_indirecao.c\`

Demonstra diferentes formas de acessar valores através de ponteiros.

### 5. Exercício Prático
**Arquivo:** \`05_exercicio_pratico.c\`

Exercício mais complexo envolvendo múltiplos ponteiros e operações.

### 6. Tamanhos na Memória
**Arquivo:** \`06_sizeof_tipos.c\`

Explora o tamanho de diferentes tipos de dados e ponteiros na memória.

## 🎯 Objetivos de Aprendizado

- [x] Entender o conceito de endereços de memória
- [x] Declarar e usar ponteiros simples
- [x] Trabalhar com ponteiros duplos
- [x] Compreender operadores de indireção
- [x] Analisar tamanhos de tipos na memória


##  Notas 

### Dicas Importantes:
1. **Sempre inicialize ponteiros** - Use NULL quando não souber para onde apontar
2. **Cuidado com ponteiros não inicializados** - Podem causar comportamento indefinido
3. **Ponteiros têm tamanho fixo** - Independente do tipo, ocupam o mesmo espaço (8 bytes em sistemas 64-bit)

### Padrões Observados:
- Endereços de memória são únicos para cada variável
- Ponteiros permitem modificação indireta de valores
- Operações com ponteiros seguem regras específicas de precedência

---
