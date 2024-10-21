# Crédito - CS50x 2023

## Descrição

Este programa valida números de cartões de crédito utilizando o **Algoritmo de Luhn**. O objetivo é determinar se um número de cartão é válido e a qual empresa emissora (Visa, Mastercard, American Express) ele pertence, com base no comprimento e nos primeiros dígitos do número.

## Funcionalidades

- **Validação de cartão**: O programa aplica o Algoritmo de Luhn para verificar a validade de um número de cartão de crédito.
- **Identificação da bandeira do cartão**: O programa identifica a bandeira do cartão (Visa, Mastercard, American Express) com base nos padrões dos números de cartão.

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make credit
   ```
2. Execute o programa:

   ```bash
   ./credit
   ```
3.Insira o número do cartão de crédito quando solicitado.

## Estrutura de código
  - **luhn_algorithm:** Implementa o Algoritmo de Luhn para validar o número de cartão.
  - **get_card_type:** Verifica os primeiros dígitos e o comprimento do número para determinar a bandeira do cartão.
  - **main:** Ponto de entrada do programa, que solicita o número do cartão e exibe se ele é válido e a sua bandeira.

## Algoritmo de Luhn
  O Algoritmo de Luhn verifica a validade de um número de cartão de crédito somando os dígitos em posições específicas e aplicando regras matemáticas para garantir que o número segue um padrão válido.

## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.

