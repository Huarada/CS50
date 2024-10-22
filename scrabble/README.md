# Scrabble - CS50x 2023

## Descrição

Este programa simula uma versão simples do jogo **Scrabble**, onde dois jogadores inserem palavras, e o programa calcula a pontuação de cada palavra com base nos valores tradicionais das letras no jogo. O jogador com a maior pontuação vence.

## Funcionalidades

- **Cálculo de Pontuação**: O programa calcula a pontuação de cada palavra com base no valor de cada letra.
- **Comparação de Palavras**: O programa compara as pontuações das palavras fornecidas pelos dois jogadores.
- **Determinação do Vencedor**: O jogador com a maior pontuação vence, e o programa exibe o vencedor.

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make scrabble
   ```
2. Execute o programa:

  ```bash
  ./scrabble
  ```
3.Insira as palavras de cada jogador quando solicitado, e o programa exibirá o vencedor ou se houve empate.

Estrutura do Código

 - compute_score: Função que recebe uma palavra como entrada e calcula a pontuação total com base nos valores das letras.
 - main: Função principal que solicita as palavras dos dois jogadores, calcula suas pontuações e determina o vencedor.
 - 
## Exemplo de Uso
Ao executar o programa, você verá uma saída semelhante a:
  ```bash
  Player 1: hello
  Player 2: world
  Player 2 wins!
  ```

## Tabela de Pontuação

O programa utiliza a seguinte tabela de pontuação para as letras, conforme o jogo Scrabble:

- 1 ponto: A, E, I, L, N, O, R, S, T, U
- 2 pontos: D, G
- 3 pontos: B, C, M, P
- 4 pontos: F, H, V, W, Y
- 5 pontos: K
- 8 pontos: J, X
- 10 pontos: Q, Z

## Detalhes de Implementação
 - O programa percorre cada caractere da palavra inserida, verifica o valor da letra usando a tabela de pontuação e soma os pontos.
 - Letras maiúsculas e minúsculas são tratadas de forma equivalente, garantindo que a pontuação seja a mesma independentemente do caso da letra.
 - Após calcular as pontuações de ambos os jogadores, o programa compara os resultados e exibe o vencedor ou se houve empate.

## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.
