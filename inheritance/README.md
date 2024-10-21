# Inheritance - CS50x 2023

## Descrição

Este programa simula a **herança genética** de uma família. Através da utilização de **estruturas** em C, o programa gera aleatoriamente a cor dos genes (alelos) de sangue de três gerações de uma família, determinando quais características (alelos) são passadas de pais para filhos. O programa utiliza recursão para gerar os alelos e simular a herança genética entre gerações.

## Funcionalidades

- **Geração de alelos**: Gera aleatoriamente alelos para cada pessoa na primeira geração.
- **Simulação de herança**: Usa recursão para simular como os alelos são transmitidos de pais para filhos ao longo de três gerações.
- **Impressão da árvore genealógica**: Exibe a herança genética, mostrando os alelos de cada pessoa nas gerações simuladas.

## Como executar

1. Compile o programa utilizando o comando:

   ```bash
   make inheritance
   ```

2.Execute o programa com o seguinte comando:
   ```bash
   ./inheritance
   ```
3. O programa exibirá a árvore genealógica, mostrando os alelos de cada pessoa.

## Estrutura do Código
  - create_family: Função recursiva que cria uma árvore genealógica simulada com três gerações.
  - random_allele: Gera aleatoriamente um dos dois alelos possíveis para a cor do sangue ('A' ou 'B').
  - random_allele: Gera aleatoriamente um dos dois alelos possíveis para a cor do sangue ('A' ou 'B').
  - free_family: Libera a memória alocada para a árvore genealógica.

## Exemplo de Uso
  Ao executar o programa, você verá uma saída semelhante a:

     ```bash
    Generation 0, blood type BB
    Generation 1, blood type AB
      Child of generation 2, blood type AA
      Child of generation 2, blood type AB
     ```
## Requisitos
Linguagem C: O programa foi escrito em C e utiliza conceitos de alocação dinâmica de memória e estruturas.

## Detalhes de Implementação
  - O programa simula três gerações de uma família, onde cada pessoa recebe um alelo de cada pai.
  - A primeira geração (avós) recebe alelos aleatórios, e as gerações seguintes herdam alelos dos pais.
  - O programa utiliza ponteiros e estruturas para armazenar e organizar os dados genéticos.
    
## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.
  
