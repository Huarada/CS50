# Plurality - CS50x 2023

## Descrição

Este programa implementa um sistema de votação de pluralidade, onde cada eleitor pode votar em um único candidato, e o candidato com o maior número de votos vence. O projeto ensina como manipular arrays, strings e estruturas de dados em C para simular um sistema de votação.

## Funcionalidades

- **Adição de votos**: O programa permite que eleitores votem em um candidato pelo nome.
- **Validação de votos**: Verifica se o nome do candidato inserido é válido e contabiliza o voto.
- **Exibição do vencedor**: Após todos os votos serem inseridos, o programa exibe o(s) candidato(s) com o maior número de votos.

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make plurality
   ```

2. Execute o programa passando o nome dos candidatos como argumentos:
   ```bash
   ./plurality [candidato1] [candidato2] ... [candidatoN]
   ```
3. O programa solicitará o número de eleitores e registrará seus votos. Ao final, ele exibirá o(s) vencedor(es).

## Estrutura do Código
  - vote: Função que processa o voto de um eleitor, verificando se o nome inserido corresponde a um dos candidatos.
  - print_winner: Função que determina e exibe o(s) candidato(s) com o maior número de votos.
  - main: Função principal que solicita os nomes dos candidatos e processa a votação de acordo com o número de eleitores.

## Exemplo de Uso

1. Compilação do codigo
  ```bash
   make plurality
  ```
2. Execução do programa com três candidatos:
  ```bash
   ./plurality Alice Bob Charlie
  ```

3. O programa solicitará o número de eleitores e depois os votos:
   ```bash
   Number of voters: 3
   Vote: Alice
   Vote: Bob
   Vote: Alice
   ```
4. O programa exibirá o vencedor:
   Alice

## Detalhes de Implementação
  - O programa manipula um array de estruturas que armazenam o nome de cada candidato e seu total de votos.
  - A função vote percorre a lista de candidatos, comparando o nome inserido com os candidatos válidos. Se o nome for válido, o voto é contado.
  - Após todos os votos serem processados, print_winner exibe o nome do(s) candidato(s) com o maior número de votos.

## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.
   
   
