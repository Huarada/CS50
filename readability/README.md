# Readability - CS50x 2023

## Descrição

Este programa determina o **nível de legibilidade** de um texto fornecido com base no índice de Coleman-Liau. O índice calcula uma estimativa de qual nível de escolaridade seria necessário para compreender o texto. O programa faz isso contando o número de letras, palavras e sentenças no texto.

## Funcionalidades

- **Cálculo de legibilidade**: O programa analisa o texto fornecido e calcula o índice de Coleman-Liau para determinar a sua legibilidade.
- **Contagem de letras, palavras e sentenças**: O programa conta automaticamente a quantidade de letras, palavras e sentenças no texto.
- **Exibição do nível escolar**: Exibe o nível escolar estimado necessário para compreender o texto, como "Grade 8" ou "Grade 12+."

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make readability
   ```

2.Execute o programa:

  ```bash
  ./readability
  ```
3. Insira o texto que deseja analisar quando solicitado.

4. O programa exibirá o nível de legibilidade com base no índice de Coleman-Liau.


## Estrutura do Código
 - main: Função principal que solicita o texto ao usuário e processa a entrada.
 - count_letters: Função que conta quantas letras há no texto.
 - count_words: Função que conta o número de palavras no texto.
 - count_sentences: Função que conta o número de sentenças no texto.
 - coleman_liau_index: Função que calcula o índice de Coleman-Liau com base nas contagens de letras, palavras e sentenças.

## Exemplo de Uso
Ao executar o programa, você pode inserir um texto como este:

   ```bash
   Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
   ```

O programa retornará:
  ```bash
  Grade 3
  ```

## Fórmula do Índice de Coleman-Liau
  ```bash
  index = 0.0588 * L - 0.296 * S - 15.8
  ```

## Onde:

- L é o número médio de letras por 100 palavras.
- S é o número médio de sentenças por 100 palavras

## Detalhes de Implementação
 - O programa percorre o texto, contando letras (a-z, A-Z), palavras (sequências separadas por espaços) e sentenças (terminadas por ".", "!" ou "?").
 - O cálculo final é feito com base nas médias de letras e sentenças por 100 palavras, seguindo a fórmula do índice de Coleman-Liau.

## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.
